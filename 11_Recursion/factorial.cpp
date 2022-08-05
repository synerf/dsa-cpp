#include <iostream>

using namespace std;

// fact(n) = n * fact(n-1)

int factorial(int n) {
  // check if input is valid
  if (n < 0) return -1;

  // stop when n becomes 0
  if (n == 0) return 1;

  // main logic
  return n * factorial(n - 1);
}

int main() {
  // take input from user
  int n;
  cout << "Enter number: ";
  cin >> n;

  int ans = factorial(n);

  cout << "Factorial of " << n << " is " << ans << endl;
}