#include <iostream>

using namespace std;

// function to return index of first appearance of passed element, else -1
int firstIndex(int a[], int n, int x, int i) {
  // base case
  if (i == n) return -1;

  // caculation
  if (a[i] == x) return i;

  // recursive
  return firstIndex(a, n, x, i + 1);
}

// runner
int main() {
  int a[] = {4, 2, 3, 5, 6};
  cout << firstIndex(a, 5, 3, 0);
  return 0;
}