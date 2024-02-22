#include <iostream>
#include <string>

using namespace std;

string matrToString(int** matrix, int size);
void fillSpiralMatrix(int** matrix, int n);

int main() {
	int n;
	do {
		system("cls");
		cout << "Input size of matrix:\n";
		cin >> n;
	} while (n <= 0);

	int** matrix = new int*[n];
	for (int i = 0; i < n; i++)
		matrix[i] = new int[n];

	fillSpiralMatrix(matrix, n);

	cout << matrToString(matrix, n);
}

string matrToString(int** matrix, int size) {
	string s = "";
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			s = s + to_string(matrix[i][j]) + "\t";
		}
		s += "\n";
	}
	return s;
}
void fillSpiralMatrix(int** matrix, int n) {
	int value = 1;
	for (int layer = 0; layer < (n + 1) / 2; ++layer) {
		int end = n - layer - 1;
		for (int i = layer; i <= end; ++i) matrix[layer][i] = value++;
		for (int i = layer + 1; i <= end; ++i) matrix[i][end] = value++;
		for (int i = end - 1; i >= layer; --i) matrix[end][i] = value++;
		for (int i = end - 1; i > layer; --i) matrix[i][layer] = value++;
	}
}