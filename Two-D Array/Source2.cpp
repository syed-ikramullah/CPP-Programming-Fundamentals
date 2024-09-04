/**************************************************************************************************************************//*
Write a program that reads data from a file and stores it in an array of pointers (where each pointer points to
a dynamically allocated column). Assume the file contains a fixed number of columns but varying rows.
*//***************************************************************************************************************************/

/*
#include<iostream>				//confused............not working
#include<fstream>
using namespace std;
int** readfile(char* filename, ifstream& read, int rows, int cols);
void display(int** array, int rows, int cols);
void deallocate(int** array, int rows);
int rowcounter(char* filename);
int main() {

	 char file_name[] = "data.txt";

	int r, c = 3;
	r = rowcounter(file_name);

	ifstream in;
	int** arr = readfile(file_name, in, r, c);

	deallocate(arr, r);

	system("pause");
	return 0;
}
int** readfile(char* filename, ifstream& read, int rows, int cols) {
	
	int** array = new int* [rows];
	for (int i = 0; i < rows; i++) {
		array[i] = new int[cols];
	}

	read.open(filename);
	if (read) {

		while (read.eof()) {
			for (int i = 0; i < rows; i++) {
				for (int j = 0; j < cols; j++) {
					read >> array[i][j];
				}
				cout << endl;
			}
		}
		display(array, rows, cols);
		read.close();
	}
	else {
		cout << "Error opening file." << endl;
	}
	return array;

	deallocate(array, rows);
}

void display(int** array, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
}

int rowcounter(char* filename) {
	int rows_num = 0;
	ifstream read;
	read.open(filename);
	if (read){
		char ch = '0';
		while (ch == '\n') {
			rows_num++;
		}
		return rows_num;
		read.close();
	}
	else {
		cout << "Error opening file." << endl;
		return NULL;
	}
}

void deallocate(int** array, int rows) {
	for (int i = 0; i < rows; i++) {
		delete[] array[i];
	}
	delete[] array;
}
*/