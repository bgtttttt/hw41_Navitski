#include <iostream>

#define n 3

using namespace std;

bool isSymmetrical(int matrix[n][n]);
bool isAntisymmetrical(int matrix[n][n]);

int main() {
	int matr1[n][n] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	string msg1 = isSymmetrical(matr1) ? "is" : "isn't";
	int matr2[n][n] = {
		{1,2,3},
		{2,3,4},
		{3,4,5}
	};
	string msg2 = isSymmetrical(matr2) ? "is" : "isn't";
	int matr3[n][n] = {
		{1,2,-3},
		{-2,3,4},
		{3,-4,5}
	};
	string msg3 = isAntisymmetrical(matr3) ? "is" : "isn't";
	cout << "Matrix 1 " << msg1 << " symmetric\n";
	cout << "Matrix 2 " << msg2 << " symmetric\n";
	cout << "Matrix 3 " << msg3 << " antisymmetric\n";
	return 0;
}

bool isSymmetrical(int matrix[n][n]) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (matrix[i][j] != matrix[j][i]) {
				return false;
			}
		}
	}
	return true;
}
bool isAntisymmetrical(int matrix[n][n]) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (matrix[i][j] != -matrix[j][i]) {
				return false;
			}
		}
	}
	return true;
}