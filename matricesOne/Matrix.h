#pragma once
#include <vector>

using namespace std;

template <typename T>
class Matrix {
private:
	vector <vector<T>> mat;
public:
	Matrix <T> (int row, int column) {
		mat.resize(row, vector<T>(column));
		for (int i = 0; i < row; i++)
			mat[i].resize(column);
	}
	void setCell(int x, int y, T num) {
		mat[x][y] = num;
	}
	int getCell(int x, int y) {
		return mat[x][y];
	}


};
