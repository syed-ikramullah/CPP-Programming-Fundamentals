/*********************************************************************************************************
Demonstrate with a program the equivalence of the array indexing notation arr[i] and pointer arithmetic
notation *(arr + i).
*********************************************************************************************************/

/*
#include<iostream>
using namespace std;
int main(){

	int const size= 10;
	int Array[size]={2,4,6,8,10,12,14,16,18,20 };
	int* ptr = Array;

	cout << "Array indexing notation Array[i]." << endl;
	for (int i = 0; i < size; i++) {
		cout << Array[i] << " ";
	}

	cout << "By pointer arithmetic notation." << endl;
	for (int i = 0; i < size; i++) {
		cout << *(ptr + i) << " ";
	}

	cout << "Address By pointer arithmetic notation." << endl;
	for (int i = 0; i < size; i++) {
		cout << (ptr + i) << endl;
	}

	system("pause");
	return 0;
}
*/