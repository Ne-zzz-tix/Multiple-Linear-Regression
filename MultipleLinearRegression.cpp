#include "MultipleLinearRegression.h"


MultipleLinearRegression::MultipleLinearRegression(int numberOfRegressors)
{
	_numberOfRegressors = numberOfRegressors;
}


MultipleLinearRegression::~MultipleLinearRegression()
{
}

void MultipleLinearRegression::addXY(const std::vector<double>& x, const double& y)
{
	//pokud x.size() != _numberOfRegressors --> Vyjmka
}

double MultipleLinearRegression::getA()
{
}

std::vector<double> MultipleLinearRegression::getB()
{
}