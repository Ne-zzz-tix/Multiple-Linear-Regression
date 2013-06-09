#pragma once

#include <vector>

class MultipleLinearRegression
{
public:
	MultipleLinearRegression(int numberOfRegressors = 1);
	~MultipleLinearRegression();
	void addXY(const std::vector<double>& x, const double& y);

	double getA();
	std::vector<double> getB();

private:
	int _numberOfRegressors;
};