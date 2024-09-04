/*

#include<iostream>			//Task 2 and 3 combined
using namespace std;

void display(int* arr, int size);
void shrink(int* arr, int num, int size);
void deallocate(int* arr);

int main() {

	int size;
	cout << "enter size: ";
	cin >> size;
	int* array = new int[size];
	cout << "enter elements: " << endl;
	for (int i = 0; i < size; i++) {
		cin >> array[i];
	}
	int number;
	cout << endl << "enter the Number you want to delete: ";
	cin >> number;

	shrink(array, number, size);

	deallocate(array);

	system("pause");
	return 0;
}

void display(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}

void shrink(int* arr, int num, int size) {
	cout << "Array is: " << endl;
	display(arr, size);

	int* new_array = new int[size - 1];

	int index = -1;
	for (int i = 0; i < size; i++) {
		if (arr[i] == num) {
			index = i;
			break;
		}
	}
	if (index == -1) {
		cout << "Could not find the number you want to delete.";
	}

	for (int i = 0; i < index; i++) {
		new_array[i] = arr[i];
	}
	for (int i = index + 1; i < size; i++) {
		new_array[i - 1] = arr[i];
	}
	cout << "Array after: " << endl;
	display(new_array, size - 1);

	deallocate(new_array);
}

void deallocate(int* arr) {
	delete[] arr;
}
*/