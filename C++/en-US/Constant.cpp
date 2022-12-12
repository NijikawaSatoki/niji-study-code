/* ===============================================
 * Constants
 * ===============================================
 *
 * Author: Satoki Nijikawa
 * Version: 1.00
 *
 */

#include <iostream>
using namespace std;

int main() {
	cout << "Hello world!" << endl;
	const int quarterHour = 15; // Variable 'quarterHour' is 15 and made read-only
	cout << "The answer to 60/4 is " << quarterHour << ".";
	cout << endl;
	return 0;
}
