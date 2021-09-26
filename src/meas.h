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

using namespace Eigen;

const int PSD_NUM = 128; // todo capital, unsigned char?

typedef enum
{
	r512 = 512,
	r1024 = 1024,
	r2048 = 2048,
	r4096 = 4096,
} resolution;

typedef struct
{

} FilterParams;

typedef Matrix<unsigned int, PSD_NUM, r4096> Matrix4k;

class Meas
{
private:
	Matrix4k cycle;
	Matrix4k total;

};


#endif /* SRC_MEAS_H_ */
