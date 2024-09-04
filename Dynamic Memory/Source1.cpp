/******************************************************************************************************************//*
1. Write a C++ function allocateArray that takes an integer parameter n and returns a
pointer to a dynamically allocated array of n integers.
2. Write a function initializeArray that takes a pointer to an array and its size, and
initializes the array with sequential numbers starting from 1.
3. Write a function printArray that takes a pointer to an array and its size, and prints the
elements.
4. Write a function deallocateArray that takes a pointer to an array and deallocates its
memory.
5. In the main function, demonstrate the use of these functions.
*//******************************************************************************************************************/

/*
#include<iostream>
using namespace std;
int* allocateArray(int n);
void initializeArray(int* array, int size);
void printArray(int* array, int size);
void deallocateArray(int* array);
int main() {

	int number;
	cout << "Enter number of elements of the array: ";
	cin >> number;

	int* array[] = { allocateArray(number) };

	initializeArray(*array, number);
	printArray(*array, number);
	deallocateArray(*array);

	system("pause");
	return 0;
}

int* allocateArray(int n) {
	int* array = new int[n];
	return array;
}

void initializeArray(int* array, int size) {
	for (int i = 0; i < size; i++) {
		(array[i]) = i + 1;
	}
}

void printArray(int* array, int size) {
	for (int i = 1; i <= size; i++) {
		cout << array[i] << " ";
	}
}

void deallocateArray(int* array) {

	delete[] array;
}
*/