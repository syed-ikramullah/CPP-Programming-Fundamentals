/*
#include<iostream>
using namespace std;
void display(int* arr, int size);
void regrow(int* arr, int* new_arr, int s, int new_s);
void between(int* arr, int num, int after, int s);
void deallocate(int* arr);
int main() {

	int size = 5;
	int* array = new int[size];

	cout << "enter elements of the array: " << endl;
	for (int i = 0; i < size; i++) {
		cin >> array[i];
	}
	display(array, size);

	char choice = 0;
	cout << endl << endl << "What do you want to do. Add at the end or in between somewhere? Press E for end and B for between. ";
	cin >> choice;
	if ((choice == 'E') || (choice == 'e')) {

		int new_size;
		cout << "Enter the number of new elements you want to add in the current array: ";
		cin >> new_size;
		int* new_array = new int[new_size];
		cout << "Enter elements you want to add: ";
		for (int i = 0; i < new_size; i++) {
			cin >> new_array[i];
		}

		regrow(array, new_array, size, new_size);
	}
	else if ((choice == 'B') || (choice == 'b')) {

		int new_num, placement;
		cout << "Enter the number you want to add: ";
		cin >> new_num;
		cout << "Where do you want ot place it? after which number? ";
		cin >> placement;

		cout << endl << endl << endl << "Number " << new_num << " after " << placement << " :" << endl;
		between(array, new_num, placement, size);
	}
		deallocate(array);

		system("pause");
		return 0;
	
}
void display(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}

void regrow(int* arr, int* new_arr, int s, int new_s) {
	
	int* final = new int[s + new_s];
	for (int i = 0; i < s; i++) {
		final[i] = arr[i];
	}
	for (int i = 0; i < new_s; i++) {
		final[s+i] = new_arr[i];
	}
	display(final, s + new_s);
}

void between(int* arr, int num, int after, int s) {
	int* new_array = new int[s + 1];

	int value_index = -1;
	for (int i = 0; i < s; i++) {		//to find where that element actually is after which we want to plce the new num
		if (arr[i] == after) {
			value_index = i;
			break;
		}
	}
	if (value_index == -1) {
		cout << "Value not found after which we could place the number you entered.";
	}
	for (int i = 0; i <= value_index; i++) {
		new_array[i] = arr[i];
	}
	new_array[value_index + 1] = num;
	for (int i = value_index + 1; i < s; i++) {
		new_array[i + 1] = arr[i];
	}

	display(new_array, s + 1);
	deallocate(new_array);
}

void deallocate(int* arr) {
	delete[] arr;
}
*/