/* =====================================================================
 * Learning Project 00 v0.01a
 * =====================================================================
 *
 * Author: Satoki Nijikawa
 *
 */

// Using variables

#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "Hello world!" << endl;
	int myNum = 5; // Stores a number without the decimal point
	cout << "My number is " << myNum << "." << endl;
	double myFloatNum = 5.99; // Stores a number with the decimal point
	cout << "The price is $" << myFloatNum << "." << endl;
	char myLetter = 'D'; // Stores a character
	cout << "Our callsign is " << myLetter << "." << endl;
	string myText = "Hello"; // Stores text
	cout << "The correct word for \"" << myText << "\" is \"Konnichi wa\"." << endl;
	bool myBoolean = true; // Stores a Boolean logic state
	cout << "An exit code of " << myBoolean << " means an error occured somewhere.";
	cout << endl;
	return 0;
}
