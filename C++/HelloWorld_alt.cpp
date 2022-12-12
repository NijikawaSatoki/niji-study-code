/* ================================
 * Hello World
 * ================================
 * 
 * Author: Satoki Nijikawa
 * Version: 1.00
 * 
 */

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<string> msg {"Hello", "World", "from", "GNU Nano!"};
	for (const string& word : msg) {
		cout << word << " ";
	}
	cout << endl;
	return 0;
}
