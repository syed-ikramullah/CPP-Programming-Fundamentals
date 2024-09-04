/********************************************************************************************************
Implement a function that takes a pointer to an integer array and its size, and returns a new array containing
only the even numbers. Demonstrate the function with a sample array.
*********************************************************************************************************/
/*
#include<iostream>
using namespace std;
void Return_even(int array[], int Size);
int main() {

	int const size = 10;
	int arr[size] = { 1,2,3,4,5,6,7,8,9,10 };

	int* ptr = arr;

	Return_even(arr, size);

	system("pause");
	return 0;
}
void Return_even(int array[], int Size) {
	
	int counter = 0;			//to count even numbers in the array 
	int i;

	for (i = 0; i < Size; i++) {
		if (array[i] % 2 == 0) {
			counter++;
		}
	}
	int* EvenNums = new int[counter];		//dynamic array cause we don't know the number of even numbers
	int index = 0;

	cout << endl << "Even elements of the array are: ";
	for (i = 0; i < Size; i++) {
		if (array[i] % 2 == 0) {
			EvenNums[index++] = array[i];
		}
	}
	for (i = 0; i < counter; i++) {
		cout<< EvenNums[i] << " ";
	}
	delete[] EvenNums;
	
}
*/