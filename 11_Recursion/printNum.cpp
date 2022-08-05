#include <iostream>

using namespace std;

// 5 -> 1 2 3 4 5

void printNum(int n) {
  // base case
  if (n == 0) return;

  // recursive case
  printNum(n - 1);

  // calculation
  cout << n << " ";
}

int main() {
  int n;
  cout << "Enter a number: ";
  cin >> n;

  printNum(n);
}