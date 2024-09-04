/*********************************************************************************************************
Write a function that calculates the sum of elements of a sub-array, given a pointer to the array, the starting
index, and the number of elements. Demonstrate the function.
*********************************************************************************************************/
/*
#include<iostream>
using namespace std;
int Sum(int array[], int size, int start_index);
int main() {

	int const S = 10;
	int arr[S] = { 1,2,3,4,5,6,7,8,9,10 };
	int start, elements;

	cout << "The array is: " << endl;
	for (int i = 0; i < S; i++) {
		cout << arr[i] << " ";
	}
	cout << endl << "Enter the starting index: ";
	cin >> start;
	cout << "Enter the number of elements: ";
	cin >> elements;

	cout << endl << "The sum of your desired numbers is: " << Sum(arr, elements, start) << endl;

	system("pause");
	return 0;
}
int Sum(int array[], int size, int start_index) {

	int sum = 0;

	for (int i = start_index; i < start_index + size; i++) {
		sum += array[i];
	}

	return sum;
}
*/