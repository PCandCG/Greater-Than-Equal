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
		cout << "The First Number was greater than the second";
	}
	else if (a < b) {
		cout << "The Second Number was greater than the first";
	}
	else {
		cout << "The two numbers were equal";
	}
	return 0;
}