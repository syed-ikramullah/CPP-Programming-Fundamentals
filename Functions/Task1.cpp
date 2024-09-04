#include<iostream>
using namespace std;
void reverse(float[], int);
int main() {

	float arr[5] = { 1.2,2.3,3.6,4.9,5.1 };



	system("pause");
	return 0;
}
void reverse(float arr[], int tot) {

	

	for (int i = ; i >= 0; i--) {
		cout << arr[i] << " ";
	}
}