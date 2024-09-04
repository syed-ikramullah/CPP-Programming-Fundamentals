/*
#include<iostream>
#include<fstream>
using namespace std;
int main() {

	int avg;

	ifstream read;
	read.open("average.txt");
	if (!read.is_open()) {
		cout << "File not opened.";
	}
	else {
		while (!read.eof()) {
			read >> avg;
			}
		read.close();

		}
	ofstream write;
	write.open("NewFile.txt");
	if (avg < 4) {
		write << "Below average";
	}
	else if ((avg >= 4) && (avg <= 6)){
		write << "On average";
	}
	else if (avg > 6) {
		write << "above average";
	}
	write.close();


	system("pause");
	return 0;
}
*/