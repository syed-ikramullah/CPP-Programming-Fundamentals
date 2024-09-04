/*
#include<iostream>
using namespace std;
void display(int* arr, int size);
void regrow(int* arr1, int* arr2, int after, int s1, int s2);
void deallocate(int* arr);
int main() {

	int size = 5;
	int* array = new int[size];

	cout << "enter elements of the array: " << endl;
	for (int i = 0; i < size; i++) {
		cin >> array[i];
	}
	display(array, size);
	
	int user_size, placement;
	cout << "How many number(s) you want to add? ";
	cin >> user_size;
	int* user_input = new int[user_size];
	cout << "Enter the number(s) you want to add: ";
	for (int i = 0; i < user_size; i++) {
		cin >> user_input[i];
	}
	cout << "Where do you want to place it? after which number? ";
	cin >> placement;

	regrow(array, user_input, placement, size, user_size);

	deallocate(array);
	deallocate(user_input);

	system("pause");
	return 0;

}
void display(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}

void regrow(int* arr1, int* arr2, int after, int s1, int s2) {
	int* new_array = new int[s1 + s2];

	int value_index = -1;
	for (int i = 0; i < s1; i++) {		//to find where that element actually is after which we want to plce the new num
		if (arr1[i] == after) {
			value_index = i;
			break;
		}
	}
	if (value_index == -1) {
		cout << "Value not found after which we could place the number you entered.";
	}
	for (int i = 0; i <= value_index; i++) {
		new_array[i] = arr1[i];
	}
	for (int j = 0; j < s2; j++) {
		new_array[value_index + 1 + j] = arr2[j];
	}
	for (int k = value_index + 1; k < s1; k++) {
		new_array[s2 + k] = arr1[k];
	}
	
	display(new_array, s1 + s2);
	deallocate(new_array);
}

void deallocate(int* arr) {
	delete[] arr;
}
*/