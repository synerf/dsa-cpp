// program to find number ways to climb n stairs in a staircase
// steps at time can be 1,2,3

#include <iostream>

using namespace std;

// function to count number of ways to climb n steps
int countWays(int n) {
  // check for valid input
  if (n < 0) return 0;

  // base case
  if (n == 0 || n == 1) return 1;

  // recursion
  return countWays(n - 1) + countWays(n - 2) + countWays(n - 3);
}

// runner
int main() {
  int n = 4;
  cout << countWays(n);
}