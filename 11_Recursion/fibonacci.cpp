#include <iostream>

using namespace std;

// 0 1 1 2 3 5 8 13 21
// fib(n) = fib(n-1) + fib(n-2)

int fib(int n) {
  // base case (PMI step 1)
  if (n == 0) return 0;
  if (n == 1) return 1;

  // recursive case (assumption) (PMI step 2)
  int smallOutput1 = fib(n - 1);
  int smallOutput2 = fib(n - 2);

  // calculation (PMI step 3)
  return smallOutput1 + smallOutput2;
}

int main() {
  int n;
  cout << "Enter a number: ";
  cin >> n;

  int ans = fib(n);

  cout << "Fibonacci of " << n << " is " << ans << endl;
}