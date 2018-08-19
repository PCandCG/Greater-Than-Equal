#include <iostream>
using namespace std;

int main() {
	int a;
	int b;
	cout << "Enter First Number: ";
	cin >> a;
	cout << "Enter Second Number: ";
	cin >> b;
	if (a > b) {
		cout << "The First Number was greater than the second" << endl;
	}
	else if (a < b) {
		cout << "The Second Number was greater than the first" << endl;
	}
	else {
		cout << "The two numbers were equal" << endl;
	}
	system("PAUSE");
	return 0;
}
