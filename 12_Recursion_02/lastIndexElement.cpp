#include <iostream>

using namespace std;

int lastIndex(int a[], int n, int x, int i) {
  // base case
  if (i == -1) return -1;

  // calculation
  if (a[i] == x) return i;

  // recursive case
  return lastIndex(a, n, x, i - 1);
}

int main() {
  int n = 5;
  int a[n] = {9, 3, 9, 4, 5};
  cout << lastIndex(a, n, 9, n - 1);
  return 0;
}