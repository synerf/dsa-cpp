#include <iostream>

using namespace std;

int arraySum(int a[], int n) {
  // base case
  if (n == 0) return 0;

  // recursive case
  int smallAns = arraySum(a + 1, n - 1);

  // calculation
  return smallAns + a[0];
}

int main() {
  int a[] = {1, 2, 3, 4, 5};
  cout << arraySum(a, 5);
}