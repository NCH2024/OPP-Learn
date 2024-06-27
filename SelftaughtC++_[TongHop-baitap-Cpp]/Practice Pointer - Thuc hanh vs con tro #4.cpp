

// Viết một chương trình C++ để nhập vào hai ma trận vuông cấp n. 
// Sử dụng con trỏ để tính tổng hai ma trận và in kết quả ra màn hình.

#include <iostream>
using namespace std;

void EnterMatrix(int** matrix, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "Nhap cac phan tu: [" << i << "][" << j << "]= ";
			cin >> matrix[i][j];
		}
	}
}

int** SumMatrix(int** matrix1, int** matrix2, int n)
{
	int** matrixSum = new int* [n];
	for (int i = 0; i < n; i++)
	{
		matrixSum[i] = new int[n];
		for (int j = 0; j < n; j++)
		{
			matrixSum[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}
	return matrixSum;
}

int ** MultilyMatrix (int** matrix1, int** matrix2,int n)
{
	int **matrixMul = new int* [n];
	for (int i = 0; i < n; i++) {
		matrixMul[i] = new int[n];
		for (int j = 0; j < n; j++) {
			matrixMul[i][j] = matrix1[i][j] * matrix2[i][j];
		}
	}
	return matrixMul;
}

void PrintMatrix(int** matrix, int n) 
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}
}


int main()
{
	int n;
	cout << "Hay nhap cap cua ma tran A va B: ";
	cin >> n;
	int** matrix1 = new int* [n];
	for (int i = 0; i < n; i++) {
		matrix1[i] = new int[n];
	}
	cout << "Ma tran A: \n";
	EnterMatrix(matrix1, n);

	int** matrix2 = new int* [n];
	for (int i = 0; i < n; i++) {
		matrix2[i] = new int[n];
	}
	cout << "Ma tran B: \n";
	EnterMatrix(matrix2, n);

	cout << "Hai ma tran vua nhap la:\n";
	cout << "Ma tran A: \n";
	PrintMatrix(matrix1, n);
	cout << "Ma tran B: \n";
	PrintMatrix(matrix2, n);

	cout << "Tong 2 ma tran:\n";
	int **matrixSum = SumMatrix(matrix1, matrix2, n);
	PrintMatrix(matrixSum, n);

	cout << "Nhan 2 ma tran: \n";
	int** matrixMul = MultilyMatrix(matrix1, matrix2, n);
	PrintMatrix(matrixMul, n);

	for (int i = 0; i < n; i++) {
		delete matrix1[i];
		delete matrix2[i];
		delete matrixSum[i];
		delete matrixMul[i];
	}
	delete[] matrix1;
	delete[] matrix2;
	delete[] matrixSum;
	delete[] matrixMul;
}
