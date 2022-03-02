#include <iostream>
using namespace std;

int main() {

int var1;
int var2;
int add;
int sub;
int multi;
double div;

	cout << "Hello, this is a basic calculator. \n";
	cout << "Please enter the two variables you would like to add / subtract / multiply / divide, seperated by only a space. \n";
		cin >> var1;
		cin >> var2;
			add = var1 + var2;
			sub = var1 - var2;
			multi = var1 * var2;
			div = var1 / var2;
	cout << "The sum is " << add << "\n\n";
	cout << "The remainder is " << sub << "\n\n";
	cout << "The product is " << multi << "\n\n";
	cout << "The dividend is " << div << "\n";
}