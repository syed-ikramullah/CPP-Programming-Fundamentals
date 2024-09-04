/*
#include<iostream>
using namespace std;
void dangling();
int main() {

	dangling();

	system("pause");
	return 0;
}
void dangling() {

	int* ptr = new int;

	delete(ptr);

	cout << endl << "Now calling the pointer would be a dangling variable." << endl;

}
*/