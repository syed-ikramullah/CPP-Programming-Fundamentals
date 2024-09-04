/*********************************************************************************************************
Write a C++ program that declares an integer pointer, initializes it with the address of a dynamically
allocated integer, and assigns a value to the allocated memory.Print the value and then deallocate
the memory.
*********************************************************************************************************/
/*
#include<iostream>
using namespace std;
int main(){


	int* Pvalue = new int;

	*Pvalue = 50;
	cout << "Value on the address of the pointer variable is: " << *Pvalue << endl;
	
	cout << "Address of the pointer variable is: " << Pvalue << endl;
	//cout << "Address of the 'new int' variable is : " << new int << endl;
	cout << endl << "Enter your value: ";
	cin >> *Pvalue;
	cout << endl << "User entered value is: " << *Pvalue << endl;
	cout << endl << "Address before deletion: " << Pvalue << endl;

	delete Pvalue; 

	//cout << endl << "Accessing after deletion: " << *Pvalue << endl;		//Throughs exception
	//cout << endl << "Address after deletion: " << Pvalue << endl;			//Gives address diff from the above ones

	system("pause");
	return 0;
}
*/