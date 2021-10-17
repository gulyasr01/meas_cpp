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

int Meas::Meas_Start()
{
	return 0;
}
