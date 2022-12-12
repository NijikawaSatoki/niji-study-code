/* ===============================================
 * Simple Calculator / Division
 * ===============================================
 *
 * Author: Satoki Nijikawa
 * Version: 
 *
 */

#include <iostream>
using namespace std;

int main() {
	int x, y; // Initialises x and y
	float kotae; // Initialises kotae (答え 'kotae' means 'answer' in Japanese)
	cout << "Please enter a number: ";
	cin >> x;
	cout << x << "/";
	cin >> y;
	kotae = x / y;
	cout << "The answer to " << x << "/" << y << " is " << kotae << ".";
	cout << endl;
	return 0;
}
