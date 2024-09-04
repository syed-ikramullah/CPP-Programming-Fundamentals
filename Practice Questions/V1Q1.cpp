/*
#include<iostream>
using namespace std;

int* initialize(int size);
int median(int* array, int size);
void deallocate(int* array);
int main() {

	int num;
	do {
		cout << "Enter the number of students surveyed (must be positive): ";
		cin >> num;
	} while (num < 0);

	int* movies = initialize(num);

	cout << endl << "The median number of movies watched by students in a month is: " << median(movies, num) << endl;

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

int median(int* array, int size) {
	int med = 0;
	for (int i = 0; i < size - 1; i++) {
		for (int j = i; j < size; j++) {
			if (array[i] > array[j]) {
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	for (int i = 0; i < size; i++) {
		if (size % 2 == 0) {
			med = ((array[size / 2 - 1]) + (array[size / 2])) / 2;
		}
		else {
			med = array[size / 2];
		}
	}
	return med;
}

void deallocate(int* array) {
	delete[] array;
}
*/