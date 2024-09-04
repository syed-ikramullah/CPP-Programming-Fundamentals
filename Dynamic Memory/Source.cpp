
#include<iostream>
using namespace std;
void memoryleak();
int main() {



	memoryleak();


	system("pause");
	return 0;
}
void memoryleak(void) {

	int* Funptr = new int[100];

	cout << "Memory leak" << endl;
	cout << Funptr << endl;
	cout << ++Funptr << endl;

}