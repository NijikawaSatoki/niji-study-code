/* ===============================================
 * DUCK
 * ===============================================
 *
 * Author: Satoki Nijikawa
 *
 */

// This is only if you compile and run this on Linux.

#include <iostream>
using namespace std;

int main() {
	cout << "DUCK!! >_<";
	return 0;
}

// Outputs ends up being
/*  [satoki@example test]$ ./DUCK
 *  DUCK!! >_<[satoki@example test]$ 
 * on Linux. In Termux it would be like this:
 *  ~/test/ $ ./DUCK
 *  DUCK!! >_<~/test/ $ 
 * This is the reason all of my C++ code conclude with
 *  cout << endl;
 * or
 *  std::cout << std::endl
 * (I do primarily work on these in Linux, so my code
 *  is going to end up reflecting that.)
 */
