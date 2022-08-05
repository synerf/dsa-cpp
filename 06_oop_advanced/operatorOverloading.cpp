#include<iostream>

using namespace std;

class Fraction {

  private:
    int numerator;
    int denominator;

  public:
    Fraction(int numerator, int denominator) {
      this->numerator = numerator;      // mandatory to use 'this'
      this->denominator = denominator;
    }

    void print() {
      cout<<this->numerator<<"/"<<this->denominator<<endl; // using 'this' is optional here
    }

    Fraction add(Fraction const &f2) const {
      int lcm = denominator * f2.denominator;  // using 'this' is optional here
      int x = lcm / denominator;
      int y = lcm / f2.denominator;
      int num = (x * numerator) + (y * f2.numerator);

      Fraction fnew(num, lcm);
      fnew.simplify();
      return fnew;
    }

    // operator overloading example (we can now add by saying f3 = f1 + f2)
    Fraction operator+(Fraction const &f2) const {
      int lcm = denominator * f2.denominator;  // using 'this' is optional here
      int x = lcm / denominator;
      int y = lcm / f2.denominator;
      int num = (x * numerator) + (y * f2.numerator);

      Fraction fnew(num, lcm);
      fnew.simplify();
      return fnew;
    }

    void multiply(Fraction const &f2) {
      numerator = numerator * f2.numerator;
      denominator = denominator * f2.denominator;

      simplify();
    }

    // * operator
    Fraction operator*(Fraction const &f2) const {
      int n = numerator * f2.numerator;
      int d = denominator * f2.denominator;

      Fraction fnew(n,d);
      fnew.simplify();
      return fnew;
    }

    // == operator
    bool operator==(Fraction const &f2) const {
      return (numerator == f2.numerator && denominator == f2.denominator);
    }

    // ++ operator (pre increment)
    Fraction& operator++() {
      numerator = numerator + denominator;
      simplify();
      return *this;
    }

    // post increment
    Fraction operator++(int) {
      Fraction fnew(numerator, denominator);
      numerator = numerator + denominator;
      simplify();
      fnew.simplify();
      return fnew;
    }

    // += operator
    Fraction& operator+=(Fraction const &f2) {
      int lcm = denominator * f2.denominator;  // using 'this' is optional here
      int x = lcm / denominator;
      int y = lcm / f2.denominator;
      int num = (x * numerator) + (y * f2.numerator);

      numerator = num;
      denominator = lcm;
      simplify();

      return *this;
    }

    void simplify() {
      int gcd = 1;
      int j = min(this->numerator, this->denominator);
      for(int i=1; i<=j; i++) {
        if(numerator%i == 0 && denominator%i == 0) {
          gcd = i;
        }
      }
      // simplify
      numerator = numerator/gcd;
      denominator = denominator / gcd;
    }

};

int main() {

  Fraction f1(10,2);
  Fraction f2(15,4);
  Fraction f3 = f1.add(f2);
  Fraction f4 = f1 + f2;

  f1.print();
  f2.print();
  f3.print();
  f4.print();

  Fraction f5 = f1 * f2;
  f5.print();

  if (f1 == f2) {
    cout<<"equal"<<endl;
  } else {
    cout<<"not equal"<<endl;
  }

  f1.print();
  // ++f1;
  Fraction f6 = ++f1;
  f1.print();
  f6.print();

  ++(++f6);
  f6.print();

  Fraction f7(20,2);
  f7.print();
  Fraction f8 = f7++;
  f7.print();
  f8.print();

  Fraction f9(10,3);
  Fraction f10(5,2);
  f9 += f10;
  f9.print();
  f10.print();

  return 0;
}
