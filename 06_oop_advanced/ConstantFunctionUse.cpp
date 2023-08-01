#include "ConstantFunction.cpp"
#include <iostream>

using namespace std;

int main() {

  Fraction f1(10, 5);
  Fraction f2(15, 4);

  Fraction const f3;
  cout << f3.getNumerator() << " / " << f3.getDenominator() << endl;

  // f3.setNumerator(30) // only constant functions can be called by a constant object

  return 0;
}