#include <vector>
#include "Matrix.h"

using namespace std;

Matrix::Matrix(int row, int column) {
	mat.resize(row, vector<int> (column));
	for (int i = 0; i < row; i++)
		mat[i].resize(column);
}

void Matrix::setCell(int x, int y, int num) {
	mat[x][y] = num;
}

int Matrix::getCell(int x, int y){
	return mat[x][y];
}