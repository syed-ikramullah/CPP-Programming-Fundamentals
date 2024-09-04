/******************************************************************************************************************//*
1. Write a C++ program that creates a dangling pointer by deleting allocated memory but still
attempting to access it.
2. Modify the program to set pointers to nullptr after deletion to avoid dangling pointers
*//******************************************************************************************************************/

/*
#include<iostream>
using namespace std;
int main() {

	int* dangling = new int;
	cout << endl << "Enter any value to store in the Dynamically allocated memory: ";
	cin >> *dangling;
	cout << endl << "The value entered by user is: " << *dangling << endl;

	delete dangling;

	dangling = nullptr;
	if (dangling != nullptr) {
		cout << "Ptr is: " << *dangling << endl;
	}
	else {
		cout << endl << "The pointer in null." << endl;
	}


	//cout << endl << "If we access the inaccessable dangling pointer due to deletion earlier, it happens: " << *dangling << endl;

	system("pause");
	return 0;
}
*/