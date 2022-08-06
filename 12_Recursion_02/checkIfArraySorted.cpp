#include <iostream>

using namespace std;

bool isSorted(int a[], int n) {
  // base case
  if (n == 0 || n == 1) return true;
  if (a[0] > a[1]) return false;

  // recursive case
  bool isSmallerSorted = isSorted(a + 1, n - 1);

  // calculation
  return isSmallerSorted;
}

int main() {
  int a[] = {1, 2, 3, 5, 4};

  bool ans = isSorted(a, 5);

  if (ans)
    cout << "sorted";
  else
    cout << "unsorted";
}