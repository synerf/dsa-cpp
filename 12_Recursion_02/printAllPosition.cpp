#include <iostream>

using namespace std;

void printAllPosition(int a[], int n, int x, int i) {
  // base case
  if (i == n) return;

  // recursive case
  if (a[i] == x) cout << i << " ";

  printAllPosition(a, n, x, i + 1);
}

int main() {
  int n = 6;
  int a[6] = {1, 2, 2, 3, 5, 2};
  printAllPosition(a, n, 2, 0);
}