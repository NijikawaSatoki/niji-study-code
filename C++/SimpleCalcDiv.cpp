/* =====================================================================
 * Learning Project 00 v0.01a
 * =====================================================================
 *
 * Author: Satoki Nijikawa
 *
 */

// Simple Calculator (Division)

#include <iostream>
using namespace std;

int main() {
	cout << "Hello world!" << endl;
	int x, y; // Initialises x and y
	float kotae; // Initialises kotae
	cout << "Please enter a number: ";
	cin >> x;
	cout << x << "/";
	cin >> y;
	kotae = x / y;
	cout << "The answer to " << x << "/" << y << " is " << kotae << ".";
	cout << endl;
	return 0;
}
