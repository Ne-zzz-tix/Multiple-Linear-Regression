#include <iostream>
#include <string>
#include <iomanip>
#include "MultipleLinearRegression.h"

using namespace std;

int main()
{
	double row_1[] = { 7, 3, 1 };
	double row_2[] = { 0, 3, 2 };
	double row_3[] = { 5, 3, 4 };
	double row_4[] = { 3, 5, 5 };
	
	vector<double> vector1(row_1, row_1 + sizeof(row_1) / sizeof(double));
	vector<double> vector2(row_2, row_2 + sizeof(row_2) / sizeof(double));
	vector<double> vector3(row_3, row_3 + sizeof(row_3) / sizeof(double));
	vector<double> vector4(row_4, row_4 + sizeof(row_4) / sizeof(double));

	try
	{
		MultipleLinearRegression mMultipleLinearRegression(3);

		mMultipleLinearRegression.addXY(vector1, 2);
		mMultipleLinearRegression.addXY(vector2, 4);
		mMultipleLinearRegression.addXY(vector3, 6);
		mMultipleLinearRegression.addXY(vector4, 8);

		if(mMultipleLinearRegression.isValid())
		{
			cout << "A: " << mMultipleLinearRegression.getA() << endl;
			for(int i = 0; i < mMultipleLinearRegression.getB().size(); ++i)
			{
				cout << "B" << i+1 << ": " << mMultipleLinearRegression.getB().at(i) << endl;
			}
		}
	}
	catch(string error)
	{
		cout << error << endl;
	}	

	system("pause");
	return 0;
}