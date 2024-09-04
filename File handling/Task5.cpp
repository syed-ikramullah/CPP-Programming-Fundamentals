/*
#include<iostream>
#include<fstream>
using namespace std;
int main() {

	int i, integer = 0, arr[6];
	ifstream read;
	read.open("integer.txt");
	if (!read.is_open()) {
		cout << "File could not be opened.";
	}
	else {
		cout << "Enter an integer to place that in the beginning of pre-existing integers: ";
		cin >> integer;
		arr[0] = integer;
		for (i = 1; i < 6; i++) {
			read >> arr[i];
		}
		read.close();
	}
	ofstream write;
	write.open("integer.txt");
	for (i = 0; i < 6; i++) {
		write << arr[i] << " ";
	}
	write.close();

	system("pause");
	return 0;
}
*/