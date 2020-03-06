#pragma once
#include <vector>

using namespace std;

class Matrix {
public:
	Matrix(int vLengthOne, int vLengthTwo);
	void setCell(int x, int y, int num);
	int getCell(int x, int y);

private:
	vector <vector<int>> mat;
};