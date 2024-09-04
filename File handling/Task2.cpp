/*
#include<iostream>
#include<fstream>
using namespace std;
int main() {

	int arr[5];
	int i, sum = 0, avg = 0;
	ifstream read;
	read.open("integer.txt");
	if (!read.is_open()) {
		cout << "Error opening this file!!!" << endl;
	}
	else {
		while (!read.eof()) {
			for (i = 0; i < 5;i++) {
				read >> arr[i];
				sum += arr[i];

			}
		}
		cout << "Sum. is " << sum << endl;
		avg = sum / 5;
		cout << "Avg. is " << avg << endl;
		read.close();
	}
	ofstream write;
	write.open("result.txt");
	write << "Sum is: " << sum << endl;
	write << "Average is: " << avg << endl;
	write.close();



	system("pause");
	return 0;
}
*/