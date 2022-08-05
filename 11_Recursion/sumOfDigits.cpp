#include <iostream>

using namespace std;

int sum(int n) {
  // base case
  if (n == 0) return 0;

  // recursive case
  int smallAns = sum(n / 10);

  // calculation
  int lastDigit = n % 10;
  return lastDigit + smallAns;
}

int main() {
  int ans = sum(1241);
  cout << ans;
}