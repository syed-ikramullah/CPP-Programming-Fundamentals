/*********************************************************************************************************
Implement a function that reverses an array of integers using pointers. The function should not use array
indexing.
*********************************************************************************************************/

/*
#include<iostream>
using namespace std;
void reverse(int array[], int size);
int main() {

	int const s = 6;
	int arr[s] = { 10, 12, 14, 16, 18, 20 };


	reverse(arr, s);

	system("pause");
	return 0;
}
void reverse(int Array[], int size) {

	int* start = Array;
	int* end = Array + size - 1;

	cout << "Array without reversing is: ";
	for (int i = 0; i < size; i++) {
		cout << *(start + i) << " ";
	}

	cout << endl << "Array in reversed order is: ";
	
	while (start < end) {
		int temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
	for (int i = 0; i < size; i++) {
		cout << *(Array + i) << " ";
	}
	cout << endl;
}
*/