/*
#include<iostream>
#include<fstream>
using namespace std;

int** initialize(int rows, int cols);
void display(int** array, int rows, int cols);
bool write_file(ofstream& write, int** array, int rows, int cols);
bool read_file(ifstream& read, int** array, int rows, int cols);
void highest_sales(int** array, int rows, int cols);
void deallocate(int** array, int rows);
int main() {
	
	int branches, no_of_months;
	
	cout << "How many branches are there (this would be the rows): ";
	cin >> branches;
	cout << "How many months of sales data are available (this would be the cols): ";
	cin >> no_of_months;

	int** data = initialize(branches, no_of_months);
	display(data, branches, no_of_months);

	ofstream out;
	write_file(out, data, branches, no_of_months);

	ifstream in;
	read_file(in, data, branches, no_of_months);

	highest_sales(data, branches, no_of_months);

	deallocate(data, branches);

	system("pause");
	return 0;
}

int** initialize(int rows, int cols) {
	int** array = new int* [rows];
	for (int i = 0; i < rows; i++) {
		array[i] = new int[cols];
	}
	cout << "Enter data of each month for each branch: " << endl;
	cout << "Months are along the x axis (rows) and brances are along the y axis (cols). " << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			do {
				cout << "Enter sales for branch " << i + 1 << " month " << j + 1 << " :";
				cin >> array[i][j];
			} while (array[i][j] < 0);
		}
		cout << endl;
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

bool write_file(ofstream& write, int** array, int rows, int cols) {

	write.open("data.txt");
	if (write) {
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				
				write << array[i][j] << " ";
			}
			write << endl;
		}
		write.close();
		return 1;
	}
	else {
		cout << "Could not open file.";
		return 0;
	}
}

bool read_file(ifstream& read, int** array, int rows, int cols) {
	read.open("data.txt");
	if (read) {
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {

				read >> array[i][j];
			}
		}
		read.close();
		return 1;
	}
	else {
		cout << "could not open file to read in it.";
		return 0;
	}
}

void highest_sales(int** array, int rows, int cols) {
	int** sales = initialize(rows, cols);
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			sales[i] += array[i][j];
		}
		cout << endl;
	}
	cout << "Total branches with total sale are: " << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << "Branch " << i+1 << ": sales for month " << j+1 <<" is: " << sales[i][j] << endl;
		}
		cout << endl;
	}
	cout << "The branch with highest sales in each month is: ";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << "Branch " << i + 1 << ": " << sales[i][j] << endl;
		}
		cout << endl;
	}
}

void deallocate(int** array, int rows) {
	for (int i = 0; i < rows; i++) {
		delete[] array[i];
	}
	delete[] array;
}
*/