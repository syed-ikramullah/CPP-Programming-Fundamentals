/******************************************************************************************************************//*
1. Write a C++ program to dynamically allocate memory for an integer and a double.
2. Initialize the allocated variables with user input.
3. Print the values stored in the dynamically allocated memory.
4. Deallocate the memory using delete.

*//******************************************************************************************************************/
/*
#include<iostream>
using namespace std;
int main(){

	int* ptr1;
	double *ptr2;

	ptr1 = new int;
	ptr2 = new double;

	cout << "Enter value for the integer data type pointer variable: ";
	cin >> *ptr1;
	cout << "Enter value for the double data type pointer variable: ";
	cin >> *ptr2;

	cout << "Value entered by the user to the integer data type pointer variable is: " << *ptr1 << endl;
	cout << "Value entered by the user to the integer data type pointer variable is: " << *ptr2 << endl;

	delete ptr1;
	delete ptr2;

	system("pause");
	return 0;
}
*/