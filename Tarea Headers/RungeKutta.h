double g = -9.8;
double dt = 0.001;

double* rungekutta4(double t, double X[2])
{
	double k1[2] = { X[1] * dt,g * dt };
	double k2[2] = { (X[1] + (k1[0] / 2)) * dt,(g + (k1[1] / 2)) * dt };
	double k3[2] = { (X[1] + (k2[0] / 2)) * dt,(g + (k2[1] / 2)) * dt };
	double k4[2] = { (X[1] + k3[0]) * dt,(g + k3[1]) * dt };
	double* ret = new double[3];
	ret[0] = t + dt;
	ret[1] = X[0] + ((k1[0] + (2 * k2[0]) + (2 * k3[0]) + k4[0]) / 6);
	ret[2] = X[1] + ((k1[1] + (2 * k2[1]) + (2 * k3[1]) + k4[1]) / 6);
	return ret;
}
