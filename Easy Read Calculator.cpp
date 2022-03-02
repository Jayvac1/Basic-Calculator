#include <iostream>
using namespace std;

int main() {
// called it easy read because it is easier for the user to read the solutions.
	int func; 	// decides the function of addition, subtraction, multiplication, or division using the user input of a number 1-4.
	int var1; 	// first variable in the equation, variable is defined by the user.
	int var2; 	// second variable in the equation, varaible is defined by the user.
	int ans; 	// used to add/subtract/multiply/divide the variables.

	cout << "Hello, this is a basic calculator. \n"; // displays a message using cout function
	cout << "Please choose what function you would like to use. \n\n";
	cout << "Press 1 for addition. \n\n";
	cout << "Press 2 for subtraction. \n\n";
	cout << "Press 3 for multiplication.\n\n";
	cout << "Press 4 for division. \n\n";
	cin >> func; 	// uses user input to decide the function via a number 1-4.
	switch (func) { 	// switch function uses the user's previous input to execute the equation.
	case 1: 	// case 1 is the function that is executed if the user defines func as "1" with the function from line 17.
		cout << "Please type the two variables you would like to add, seperated by only a space. \n";
			cin >> var1; // user types first variable
			cin >> var2; // user types second variable
				ans = var1 + var2; // defines the ans variable using the previous two user defined variables
		cout << "The answer is: \n" << ans << "\nYou're Welcome!\n"; // displays the ans variable between the two messages.
		break;
	case 2: 	// case 2 is the function that is executed if the user defines func as "2" with the function from line 17.
		cout << "Please type the two variables you would like to subtract, seperated by only a space. \n";
			cin >> var1;
			cin >> var2;
				ans = var1 - var2;
		cout << "The answer is: \n" << ans << "\nYou're Welcome!\n";
		break;
	case 3: 	// case 3 is the function that is executed if the user defines func as "3" with the function from line 17.
		cout << "Please type the two variables you would like to multiply, seperated by only a space. \n";
			cin >> var1;
			cin >> var2;
				ans = var1 * var2;
		cout << "The answer is: \n" << ans << "\nYou're Welcome!\n";
		break;
	case 4: 	// case 4 is the function that is executed if the user defines func as "4" with the function from line 17.
		cout << "Please type the two variables you would like to divide, seperated by only a space. \n";
			cin >> var1;
			cin >> var2;
				ans = var1 / var2;
		cout << "The answer is: \n" << ans << "\nYou're Welcome!\n";
		break;
	}
}
