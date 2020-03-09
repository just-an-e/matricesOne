#include <iostream>
#include "Matrix.h"

extern template class Matrix<double>;
//extern template class Matrix<string>;

using namespace std;

int main()
{
	Matrix <double> numbers = Matrix <double>(1, 5);
	numbers.setCell(0, 0, 1);
	numbers.setCell(0, 1, 100);
}

