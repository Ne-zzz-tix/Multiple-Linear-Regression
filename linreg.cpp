#include <math.h>
#include <float.h>
#include "linreg.h"

LinearRegression::LinearRegression(Point2D *p, long size)
{
    long i;
    a = b = sumX = sumY = sumXsquared = sumYsquared = sumXY = 0.0;
    n = 0L;

    if (size > 0L) // if size greater than zero there are data arrays
        for (n = 0, i = 0L; i < size; i++)
            addPoint(p[i]);
}

LinearRegression::LinearRegression(double *x, double *y, long size)
{
    long i;
    a = b = sumX = sumY = sumXsquared = sumYsquared = sumXY = 0.0;
    n = 0L;

    if (size > 0L) // if size greater than zero there are data arrays
        for (n = 0, i = 0L; i < size; i++)
            addXY(x[i], y[i]);
}

void LinearRegression::addXY(const double& x, const double& y)
{
    n++;
    sumX += x;
    sumY += y;
    sumXsquared += x * x;
    sumYsquared += y * y;
    sumXY += x * y;
    Calculate();
}

void LinearRegression::Calculate()
{
    if (haveData())
    {
        if (fabs( double(n) * sumXsquared - sumX * sumX) > DBL_EPSILON)
        {
            b = ( double(n) * sumXY - sumY * sumX) /
                ( double(n) * sumXsquared - sumX * sumX);
            a = (sumY - b * sumX) / double(n);
        }
        else
        {
            a = b = 0.0;
        }
    }
}
