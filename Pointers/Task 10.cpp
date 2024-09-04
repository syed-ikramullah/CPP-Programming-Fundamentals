/*********************************************************************************************************
Develop a program that finds the longest increasing subsequence in an array of integers using a function that
operates on pointers.
*********************************************************************************************************/

#include<iostream>
using namespace std;
void subsequence(int array[], int size);
int main() {
	int const S = 10;
	int arr[S] = { 5,4,2,5,9,6,7,8,9,10 };
	cout << "The array is: " << endl;
	for (int i = 0; i < S; i++) {
		cout << arr[i] << " ";
	}


	subsequence(arr, S);

	system("pause");
	return 0;
}
void subsequence(int array[], int size) {

}