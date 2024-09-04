/*********************************************************************************************************
Write a program that shows the difference between passing an ordinary variable and a pointer to a function.
Demonstrate how changing the value inside the function affects the original variable in each case.
*********************************************************************************************************/

/*
#include<iostream>
using namespace std;
int ordinary(int, int);			//Simply adding two numbers and returning one value.
void pointer(int*, int*);		//Swapping variables by using pointers
int main(){

	int num1, num2;

	cout << "Enter number 1: ";
	cin >> num1;
	cout << "Enter number 2: ";
	cin >> num2;

	cout << "Checking ordinary variable." << endl;
	cout << "Sum is: " << ordinary(num1, num2) << endl;
	
	cout << endl;

	cout << "Checking pointer variable." << endl;

	cout << "Values before swaping in the function def are as under: " << endl;
	cout << "Firt number becomes: " << num1 << " and second becomes: " << num2 << endl;

	pointer(&num1, &num2);

	cout << "Values after swaping in the function def are as under: " << endl;
	cout << "Firt number becomes: " << num1 << " and second becomes: " << num2 << endl;

	system("pause");
	return 0;
}
int ordinary(int a, int b){				//ordinary variables
	int c = a + b;

	return c;
}
void pointer(int* a,int* b){			//using pointers

	int temp = *a;
	*a = *b;
	*b = temp;

}
*/