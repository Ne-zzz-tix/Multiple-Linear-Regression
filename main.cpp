#include <iostream>
#include <iomanip>
#include "linreg.h"
#include "MultipleLinearRegression.h"

using namespace std;

int main()
{
    LinearRegression mLinearRegression;
	mLinearRegression.addXY(2.0f, 1.0f);
	mLinearRegression.addXY(3.0f, 2.0f);
	mLinearRegression.addXY(5.0f, 3.0f);

	cout << "A: " << mLinearRegression.getA() << endl;
	cout << "B: " << mLinearRegression.getB() << endl;

	system("pause");
	return 0;
}