/**************************************************************************************************************************//*
multiply elements of two matrices
*//***************************************************************************************************************************/
/*
#include<iostream>
using namespace std;
int** initialize(int rows, int cols);
void display(int** array, int rows, int cols);
int** multiply(int** arr1, int** arr2, int r1, int c1, int c2);
void deallocate(int** array, int rows);
int main() {

	cout << "***Number of cols of first must always be equal to num of rows of second***" << endl;

	int rows1, rows2, cols1, cols2;
	cout << "Enter the number of rows for matrix 1: ";
	cin >> rows1;
	cout << "Enter the number of cols for matrix 1: ";
	cin >> cols1;
	cout << "Enter the number of rows for matrix 2: ";
	cin >> rows2;
	cout << "Enter the number of cols for matrix 2: ";
	cin >> cols2;

	if (cols1 != rows2) {
		cout << "Incorrect entries." << endl;
	}
	else {


		int** mat1 = initialize(rows1, cols1);
		int** mat2 = initialize(rows2, cols2);

		cout << "The first matrix is: " << endl;
		display(mat1, rows1, cols1);
		cout << "The second matrix is: " << endl;
		display(mat2, rows2, cols2);

		int** result = multiply(mat1, mat2, rows1, cols1, cols2);
		cout << endl << endl << endl << "The multiplication of the above two matrices is: " << endl << endl << endl;
		display(result, rows1, cols2);

		deallocate(mat1, rows1);
		deallocate(mat2, rows2);
		deallocate(result, rows1);
	}
	system("pause");
	return 0;
}
int** initialize(int rows, int cols) {

	int** array = new int* [rows];
	for (int i= 0; i < rows; i++) {
		array[i] = new int[cols];
	}
	cout << "Enter elements for the array: " << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cin >> array[i][j];
		}
	}
	return array;
}

void display(int** array, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
}

int** multiply(int** arr1, int** arr2, int r1, int c1, int c2) {
	int** result = new int* [r1];		//an n × p matrix A can be multiplied by a p × m matrix B to form an n × m matrix AB = C
	for (int i = 0; i < r1; i++) {
		result[i] = new int[c2];
	}

	for (int i = 0; i < r1; i++) {
		for (int j = 0; j < c2; j++) {
			result[i][j] = 0;
			for (int k = 0; k < c1; k++) {			//for dot product
				result[i][j] += arr1[i][k] * arr2[k][j];
			}
		}
	}
	return result;
}

void deallocate(int** array, int rows) {
	for (int i = 0; i < rows; i++) {
		delete[] array[i];
	}
	delete[] array;
}
*/