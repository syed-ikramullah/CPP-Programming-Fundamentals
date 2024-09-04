/*
#include<iostream>
using namespace std;

int* initialize(int size);
void mode(int* array, int size);
void deallocate(int* array);

int main() {
	int num;
		do {
			cout << "Enter the number of students surveyed (must be positive): ";
			cin >> num;
		} while (num < 0);

		int* movies = initialize(num);

		mode(movies, num);

		deallocate(movies);

		system("pause");
		return 0;
	}

int* initialize(int size) {
	int* array = new int[size];
	cout << "Enter the number of movies each student watches per month." << endl;
	for (int i = 0; i < size; i++) {
		do {
			cout << "Student " << i + 1 << " :";
			cin >> array[i];
		} while (array[i] < 0);
	}
	return array;
}

void mode(int* array, int size) {

	int* count = new int[size];
	for (int i = 0; i < size; i++) {
		count[i] = 0;
		for (int j = 0; j < size; j++) {
			if (array[i] == array[j]) {
				count[i]++;
			}
		}
	}
	int mode = array[0];
	int temp = 0;
	for (int i = 0; i < size; i++) {
		if (count[i] > temp) {
			temp = count[i];
			mode = array[i];
		}
	}
	cout << endl << "The mode of movies watched by students in a month is: " << mode << endl;
	delete[] count;
}

void deallocate(int* array) {
	delete[] array;
}
*/