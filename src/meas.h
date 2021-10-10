/*
 * meas.h
 *
 *  Created on: Sep 19, 2021
 *      Author: robert
 */

#ifndef SRC_MEAS_H_
#define SRC_MEAS_H_

#include <iostream>
#include <Eigen/Dense>

#include <sys/time.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace Eigen;

/* Resolution of the measured matrix Pulse Shape Discriminand (y axis)*/
const int PSD_NUM = 128; // todo capital, unsigned char?

/* Resolution of the measurement's energy scale (x axis)*/
typedef enum
{
	r512 = 512,
	r1024 = 1024,
	r2048 = 2048,
	r4096 = 4096,
} resolution;

/* FPGA implemented trapez fileter parameters*/
typedef struct
{
	uint16_t m, k, M; // flat top, avg, decay time
	bool scaler;
} FilterParams;

typedef struct
{
	struct timeval start_time; // start time of the measurement
	bool repeated; // if the measurement finishes the kernel driver start aucomatically
} MeasParams;

typedef Matrix<unsigned int, PSD_NUM, r4096> Matrix4k;
typedef Vector<unsigned int, r4096> Spectrum4k;

class Meas
{
private:
	Matrix4k cycle;
	Matrix4k total;
	FilterParams filter_params;
	MeasParams meas_params;

public:
	// Member fucntion definitons
	Meas(void);
	~Meas(void);

	int Meas_Start(void);
	int Meas_Stop(void);
	void Meas_evCycFin(int signum);
	void Meas_evMeasFin(int signum);
};


#endif /* SRC_MEAS_H_ */
