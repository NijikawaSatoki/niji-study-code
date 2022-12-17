/* ========================================================================
 * Examples of Every Single Operator
 * ========================================================================
 * 
 * Author: Satoki Nijikawa
 * Version: 1.00a
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
  // Assignment operator: =
  int x, y;
  x = 5;
  y = 55;
  x = y;
  cout << "The value of x is " << x << " and the value of y is also " << y << "." << endl;
  
  // Addition operator: +
  int ansSum = 77 + 99;
  string catString = "One hundred " "seventy-six"
  cout << "The sum of 77 + 99 is " << ansSum << "." << endl;
  cout << "The answer is read as " << catString << "." << endl;
  
  // Subtraction operator: -
  signed int ansDifference = 70 - 76;
  cout << "The difference of 70 - 76 is " << ansDifference << "." << endl;
  
  // Multiplication operator: *
  int ansProduct = 28 * 26;
  cout << "The product of 28 * 26 is " << ansProduct << "." << endl;
  
  // Division operator: /
  double ansQuotient = 6 / 5;
  cout << "The quotient of 6 / 5 is " << ansQuotient << "." << endl;
  
  // Modulus operator: %
  int ansModulo = 63 % 52;
  cout << "The modulus of 63 % 52 is " << ansModulo << "." << endl;
  
  // Redefined x to be 5 once more
  x = 5;
  
  // Addition assignment operator: +=
  int addAssign = x += 25;
  cout << "The new value of x after adding 25 to it is " << addAssign << "." << endl;
  
  // Subtraction assignment operator: -=
  signed int subtractAssign = x -= 78;
  cout << "The new value of x after subtracting 78 from it is " << subtractAssign << "." << endl;
  
  return 0;
}
