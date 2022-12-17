#include <iostream>
using namespace std;

int main() {
  cout << !(5 == 5) << endl;   // evaluates to false because the expression at its right (5 == 5) is true
  cout << !(6 <= 4) << endl;   // evaluates to true because (6 <= 4) would be false
  cout << !true << endl;       // evaluates to false
  cout << !false      // evaluates to true
  cout << endl;
  return 0;
}
