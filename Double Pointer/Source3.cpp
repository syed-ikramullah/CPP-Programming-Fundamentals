/*
#include<iostream>
#include<fstream>
using namespace std;

void display(int* array, int size);
int* read_file(ifstream& read, int size);
void shrink(int* array, int size);
void deallocate(int* array);

int main() {
	int size = 10;
	int* arr = new int[size];

	ifstream in;
	arr = read_file(in, size);
	
	shrink(arr, size);

	deallocate(arr);

	system("pause");
	return 0;
}

void display(int* array, int size) {
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
}

int* read_file(ifstream& read, int size) {
	int* array = new int[size];
	char filename[50] = {0};
	cout << "Enter filename: ";
	cin.getline(filename, 49);
	read.open(filename);
	if (read) {

		for (int i = 0; i < size; i++) {
			read >> array[i];
		}
		read.close();
	}
	else {
		cout << "error opening file.";
	}
	return array;
}

void shrink(int* array, int size) {
	cout << "The array we have is: " << endl;
	display(array, size);

	int count = 0;
	for (int i = 0; i < size; i++) {
		if ((array[i] >= 10) && (array[i] <= 100)) {
			count++;
		}
	}
	int* new_array = new int[count];
	int index = 0;
	for (int i = 0; i < size; i++) {
		if ((array[i] >= 10) && (array[i] < 100)) {
			new_array[index] = array[i];
			index++;
		}
	}
	cout << endl << "After shrinking the array: " << endl;
	display(new_array, count);

	deallocate(new_array);
}

void deallocate(int* array) {
	delete[] array;
}
*/