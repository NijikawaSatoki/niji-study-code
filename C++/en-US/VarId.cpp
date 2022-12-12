/* ===============================================
 * Variable Names
 * ===============================================
 *
 * Author: Satoki Nijikawa
 * Version: 1.00a
 *
 */

#include <iostream>
using namespace std;

int main() {
	int minutesPerHour = 60; // This is a good variable identifier. It explains the data stored.
	int m = 30; // This is a terrible variable identifier! What is "m" even describing?!
	/* NOTICE!
	 * "Variable Naming Practices"
	 * Variable names can contain letters, digits, and underscores (_).
	 * Variable names MUST begin with a letter or an underscore.
	 * Variable names are case-sensitive. "myVar" and "myvar" are two 
	 * different variables. DO NOT FORGET THIS!
	 * Variable names CANNOT and SHALL NOT contain whitespaces ( ) or 
	 * special characters such as "!", "#", "%", etc.
	 * Reserved words such as keywords can not be used as variable names. 
	 * Don't bother trying it.
	 */
	cout << "There are " << minutesPerHour << " minutes in an hour, not " << m << ".";
	cout << endl;
	return 0;
}
