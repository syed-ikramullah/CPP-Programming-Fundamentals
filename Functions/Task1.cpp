#include<iostream>
using namespace std;

void reverse(int s, float arr[]);

int main() {

	const int size = 5;
	float array[size] = { 2.2,3.3,4.4,5.5,6.6 };

	reverse(size, array);

	system("pause");
	return 0;
}
void reverse(int s, float arr[]) {

	cout << "Array before reversing is: " << endl;
	for (int i = 0; i < s; i++) {
		cout << arr[i] << " ";
	}
	cout << endl << "Array after reversing is: " << endl;
	for (int i = s - 1; i >= 0; i--) {
		cout << arr[i] << " ";
	}
}
