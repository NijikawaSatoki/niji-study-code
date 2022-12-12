/* ================================
 * Hello World
 * ================================
 * 
 *  Author: Satoki Nijikawa
 *  Circle: Youkai Gekkou
 * Version: 0.01 revision b
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
