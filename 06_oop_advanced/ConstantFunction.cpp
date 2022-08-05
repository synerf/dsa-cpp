#include<iostream>

using namespace std;

class Fraction {

  private:
    int numerator;
    int denominator;

  public:
    Fraction() {

    }

    Fraction(int numerator, int denominator) {
      this->numerator = numerator;      // mandatory to use 'this'
      this->denominator = denominator;
    }

    // constant functions are those functions that do not change properties of object
    int getNumerator() const {
      return numerator;
    }

    int getDenominator() const {
      return denominator;
    }

    void setNumerator(int n) {
      numerator = n;
    }

    void setDenominator(int d) {
      denominator = d;
    }

    void print() {
      cout<<this->numerator<<"/"<<this->denominator<<endl; // using 'this' is optional here
    }

    void add(Fraction const &f2) {
      int lcm = denominator * f2.denominator;  // using 'this' is optional here
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
