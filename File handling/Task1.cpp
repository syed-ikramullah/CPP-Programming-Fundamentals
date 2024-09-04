//Create a program that reads a line of text from the user using getline() and then prints out the
number of characters in the inputted line.

#include<iostream>
#include<fstream>
using namespace std;
int main() {

	int num1 = 0;
	double num2 = 0;
	bool num3 = 0;
	float num4 = 0;
	char arr[50] = { '\0' };

	ifstream read1;
	read1.open("read1.txt");
	if (!read1.is_open()) {
		cout << "File not opened!!!" << endl;
	}
	else {
			read1 >> num1;
			read1 >> num2;
			read1 >> num3;
			read1 >> num4;
			while (!read1.eof()) {
				read1.getline(arr, 49);
		}
		read1.close();
	}
	
	ofstream write1;
	write1.open("write1.txt");
	write1 << num1 << endl;
	write1 << num2 << endl;
	write1 << num3 << endl;
	write1 << num4 << endl;
	write1 << arr << endl;

	write1.close();

	system("pause");
	return 0;
}
