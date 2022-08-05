#include <iostream>

using namespace std;

int count(int n) {
  // base case
  if (n == 0) return 0;

  // recursive case
  int smallAns = count(n / 10);

  // calcualation
  return smallAns + 1;
}

int main() {
  cout << count(78222);
  return 0;
}