#include <iostream>

using namespace std;

int multiply(int m, int n) {
  // base case
  if (n == 0) return 0;

  // recursive case
  int smallAns = multiply(m, n - 1);

  // calculation
  return smallAns + m;
}

int main() {
  cout << multiply(3, 5);
  return 0;
}