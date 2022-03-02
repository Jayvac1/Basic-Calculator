#include <iostream>
using namespace std;

int main() {

	int func;
	int var1;
	int var2;
	int ans;

	cout << "Hello, this is a basic calculator. \n";
	cout << "Please choose what function you would like to use. \n\n";
	cout << "Press 1 for addition. \n\n";
	cout << "Press 2 for subtraction. \n\n";
	cout << "Press 3 for multiplication.\n\n";
	cout << "Press 4 for division. \n\n";
	cin >> func;
	switch (func) {
	case 1:
		cout << "Please type the two variables you would like to add, seperated by only a space. \n";
		cin >> var1;
		cin >> var2;
		ans = var1 + var2;
		cout << "The answer is: \n" << ans << "\nYou're Welcome!\n";
		break;
	case 2:
		cout << "Please type the two variables you would like to subtract, seperated by only a space. \n";
		cin >> var1;
		cin >> var2;
		ans = var1 - var2;
		cout << "The answer is: \n" << ans << "\nYou're Welcome!\n";
		break;
	case 3:
		cout << "Please type the two variables you would like to multiply, seperated by only a space. \n";
		cin >> var1;
		cin >> var2;
		ans = var1 * var2;
		cout << "The answer is: \n" << ans << "\nYou're Welcome!\n";
		break;
	case 4:
		cout << "Please type the two variables you would like to divide, seperated by only a space. \n";
		cin >> var1;
		cin >> var2;
		ans = var1 / var2;
		cout << "The answer is: \n" << ans << "\nYou're Welcome!\n";
		break;
	}
}