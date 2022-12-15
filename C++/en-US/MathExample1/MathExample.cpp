/* ========================================================================
 * Using Operators on Numbers
 * ========================================================================
 * 
 * Author: Satoki Nijikawa
 * Version: 1.00a
 * 
 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  // Setting up the numbers
  double numTwentyFour = 24.00000;
  double numFourtyOne = 41.00000;
  
  // Performing the math (At least I'm not doing the math myself, mostly)
  double ansSum = numTwentyFour + numFourtyOne;
  double ansDifference = numTwentyFour - numFourtyOne;
  double ansProduct = numTwentyFour * numFourtyOne;
  double ansQuotient = numTwentyFour / numFourtyOne;
  double ansModulo = fmod(numTwentyFour, numFourtyOne);
  double ansPower = pow(numTwentyFour, numFourtyOne);
  double ansFloor = floor(ansQuotient);
  
  // Printing the output
  cout << "The sum of 24 + 41 is " << ansSum << "." << endl;
  cout << "The difference of 24 - 41 is " << ansDifference << "." << endl;
  cout << "The product of 24 * 41 is " << ansProduct << "." << endl;
  cout << "The quotient of 24 / 41 is " << ansQuotient << "." << endl;
  cout << "The modulus of 24 % 41 is " << ansModulo << "." << endl;
  cout << "The answer to 24^41 is " << ansPower << "." << endl;
  cout << "The floor of 24 / 41 is " << ansFloor << ".";
  cout << endl;
  
  return 0;
}
