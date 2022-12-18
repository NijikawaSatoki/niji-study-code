#include <iostream>
#include <cmath>  // This is calling the C Math library. Now we can do some complex math!
using namespace std;

int main() {
  int bit0, bit1, bit2, bit3, bit4, bit5, bit6, bit7;
  bit0 = pow(2, 0);
  bit1 = pow(2, 1);
  bit2 = pow(2, 2);
  bit3 = pow(2, 3);
  bit4 = pow(2, 4);
  bit5 = pow(2, 5);
  bit6 = pow(2, 6);
  bit7 = pow(2, 7);
  cout << "The powers of 2 are :" << endl;
  cout << "2^0 = " << bit0 << "\t\t00000001" << endl;
  cout << "2^1 = " << bit1 << "\t\t00000010" << endl;
  cout << "2^2 = " << bit2 << "\t\t00000100" << endl;
  cout << "2^3 = " << bit3 << "\t\t00001000" << endl;
  cout << "2^4 = " << bit4 << "\t00010000" << endl;
  cout << "2^5 = " << bit5 << "\t00100000" << endl;
  cout << "2^6 = " << bit6 << "\t01000000" << endl;
  cout << "2^7 = " << bit7 << "\t10000000";
  cout << endl;
  return 0;
}
