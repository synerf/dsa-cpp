#include <iostream>

using namespace std;

int countZero(int n) {
  // base case
  if (n == 0) return 0;

  // recursive case
  int smallAns = countZero(n / 10);

  // calculation
  int lastDigit = n % 10;
  if (lastDigit == 0) {
    return smallAns + 1;
  } else {
    return smallAns;
  }
}

int main() {
  cout << countZero(10330);
  return 0;
}