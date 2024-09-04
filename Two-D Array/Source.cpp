/*******************************************************************************************************************//*
Write a function in C++ that takes a 2D array as a parameter and prints its elements.Demonstrate why the
column size is compulsory in the function signature.
*//***************************************************************************************************************************/
/*
#include<iostream>
using namespace std;
void display(int arr[][3], int rows, int cols);
int main() {
	int const r = 4;
	int const c = 3;
	int arr[r][c] = { 10,20,30,40,50,60,70,80,90,100,110,120 };

	display(arr, r, c);

	system("pause");
	return 0;
}
void display(int arr[][3], int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << arr[i][j] << " ";

		}
		cout << endl;
	}

}
*/