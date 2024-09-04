#include<iostream>
#include<fstream>
using namespace std;
int main() {

	char candidate1[20], candidate2[20], candidate3[20], candidate4[20], candidate5[20];
	double votes[5];
	double percentage = 0;
	ofstream fout;
	fout.open("Task 6.txt");
	cout << "Enter name of Candidate 1" << ": ";
	cin >> candidate1;
	cout << "Enter name of Candidate 2" << ": ";
	cin >> candidate2;
	cout << "Enter name of Candidate 3" << ": ";
	cin >> candidate3;
	cout << "Enter name of Candidate 4" << ": ";
	cin >> candidate4;
	cout << "Enter name of Candidate 5" << ": ";
	cin >> candidate5;
	int total = 0;
	for (int i = 0; i < 5; i++) {
		cout << "Enter votes of Candidate " << i + 1 << ": ";
		cin >> votes[i];
		total += votes[i];

	}
	int winner = 0;
	double winner1;
	for (int i = 0; i < 5; i++) {
		percentage = (votes[i] / total) * 100;
		if (i == 0) {
			winner1 = percentage;
		}
		cout << "Percentage of votes got by candidiate " << i + 1 << "is " << percentage << endl;
		fout << "Percentage of votes got by candidiate " << i + 1 << "is " << percentage << endl;
		if (i >= 1) {
			if (percentage > winner1) {
				winner1 = percentage;
				winner = i + 1;
			}
		}
	}
	cout << "Winner is candidiate " << winner << endl;

	fout.close();




	system("pause");
	return 0;
}