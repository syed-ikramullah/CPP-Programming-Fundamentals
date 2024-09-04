/*
#include<iostream>
#include<fstream>
using namespace std;
int main() {

	int arr[5], i, j, min, max, temp = 0;

	ifstream read;
	read.open("integer.txt");
	if (!read.is_open()) {
		cout << "File could not be accessed!!!";
	}
	else {
		while (!read.eof()) {
			for (i = 0; i < 5; i++) {
				read >> arr[i];
			}
			min = arr[0];
			max = arr[0];
			for (i = 0; i < 4; i++) {
				for (j = i + 1; j < 5; j++) {
					if (min > arr[j]) {
						temp = arr[j];
						arr[j] = min;
						min = temp;
					}
					if (max < arr[j]) {
						temp = arr[j];
						arr[j] = max;
						max = temp;
					}
					}

			}

			cout << "Minimum value is: " << min << endl;
			cout << "Maximum value is: " << max << endl;
		}
		read.close();
	}

	ofstream write;
	write.open("result.txt", ios::app);
	write << endl << "Question no 3: " << endl;
	write << "Minimum value is: " << min << endl;
	write << "Maximum value is: " << max << endl;
	write.close();

	system("pause");
	return 0;
}
*/