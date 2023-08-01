#include <iostream>

using namespace std;

class Fraction {

  private:
  int numerator;
  int denominator;

  public:
  Fraction(int numerator, int denominator) {
    this->numerator = numerator; // mandatory to use 'this'
    this->denominator = denominator;
  }

  void print() {
    cout << this->numerator << "/" << this->denominator << endl; // using 'this' is optional here
  }

  void add(Fraction const &f2) {
    int lcm = denominator * f2.denominator; // using 'this' is optional here
    int x = lcm / denominator;
    int y = lcm / f2.denominator;
    int num = (x * numerator) + (y * f2.numerator);

    // store result in f1
    this->numerator = num;
    this->denominator = lcm;

    simplify();
  }

  void multiply(Fraction const &f2) {
    numerator = numerator * f2.numerator;
    denominator = denominator * f2.denominator;

    simplify();
  }

  void simplify() {
    int gcd = 1;
    int j = min(this->numerator, this->denominator);
    for (int i = 1; i <= j; i++) {
      if (numerator % i == 0 && denominator % i == 0) {
        gcd = i;
      }
    }
    // simplify
    numerator = numerator / gcd;
    denominator = denominator / gcd;
  }
};

int main() {

  Fraction f1(10, 2);
  Fraction f2(15, 4);

  cout << "Values before adding fractions" << endl;
  f1.print();
  f2.print();

  f1.add(f2);

  cout << "Values after adding fractions:" << endl;
  f1.print();
  f2.print();

  f1.multiply(f2);

  cout << "Values after multiplying fractions:" << endl;

  f1.print();
  f2.print();

  return 0;
}
