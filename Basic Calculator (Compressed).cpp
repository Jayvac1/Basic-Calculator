#include <iostream>
using namespace std;
// basically the same thing, except significantly less lines, and displays the sum, remainder, product, and dividend all at once
int main() {

int var1;
int var2;
int add;
int sub;
int multi;
double div;

	cout << "Hello, this is a basic calculator. \n"; // displays a message using cout function
	cout << "Please enter the two variables you would like to add / subtract / multiply / divide, seperated by only a space. \n";
		cin >> var1; // uses user input to define the varible
		cin >> var2;
			add = var1 + var2; // adds the user defined var1 and var2
			sub = var1 - var2; // subtracts the user defined var1 from var2
			multi = var1 * var2; // multiplies the user defined var1 by var2
			div = var1 / var2; // divides the user defined var1 by var2
	cout << "The sum is " << add << "\n\n"; // displays the sum
	cout << "The remainder is " << sub << "\n\n"; // displays the remainder
	cout << "The product is " << multi << "\n\n"; // displays the product
	cout << "The dividend is " << div << "\n"; // displays the dividend
}
