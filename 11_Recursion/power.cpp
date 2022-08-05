#include <iostream>

using namespace std;

// pow(x,n) = x * pow(x, n-1)
// 10^4 = 10 * 10^3

int pow(int x, int n) {
  // base case (PMI step 1)
  if (n == 0) return 1;

  // recursive case (assumption) (PMI step 2)
  int smallOutput = pow(x, n - 1);

  // calculation (PMI step 3)
  return x * smallOutput;
}

int main() {
  int x, n;
  cout << "Enter number and power: ";
  cin >> x >> n;

  int ans = pow(x, n);

  cout << x << "^" << n << " is " << ans << endl;
}