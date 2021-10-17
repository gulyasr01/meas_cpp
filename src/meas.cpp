/*
 * meas.cpp
 *
 *  Created on: Sep 26, 2021
 *      Author: robert
 */

#include "meas.h"

Meas::Meas(void)
{
	cycle = MatrixXu64::Zero(PSD_NUM, r4096);
	total = MatrixXu64::Zero(PSD_NUM, r4096);
}

Meas::~Meas(void)
{
	cycle.resize(0, 0);
	total.resize(0, 0);
}

int Meas::Meas_Start(void)
{
	// ioctl

	return 0;
}

int Meas::Meas_Stop()
{
	// ioctl

	return 0;
}

int Meas::Meas_FilterInit(void)
{
	// ioctl

	return 0;
}

void Meas::Meas_evCycFin(int signum)
{
	// ioctl
}

void Meas::Meas_evMeasFin(int signum)
{
	// ioctl
}
