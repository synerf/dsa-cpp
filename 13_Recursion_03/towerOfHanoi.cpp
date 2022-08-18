// program to calculate number of steps to solve tower of hanoi
// direct formala--- number of steps = 2^(n-1)

#include <iostream>

using namespace std;

int numOfSteps(int n) {
  // base case
  if (n == 0) return 0;

  // recursion
  int smallAns = numOfSteps(n - 1);

  // calculate
  return smallAns + 1 + smallAns;
}

int main() { cout << numOfSteps(3); }