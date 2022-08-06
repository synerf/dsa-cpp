#include <iostream>

using namespace std;

bool isPresent(int a[], int n, int x) {
  // base case
  if (n == 0) return false;

  if (x == a[0]) {
    return true;
  }

  // recursive case
  return isPresent(a + 1, n - 1, x);
}

int main() {
  int a[] = {1, 9, 3, 4, 5};

  bool ans = isPresent(a, 5, 9);

  if (ans)
    cout << "Present";
  else
    cout << "Not present";
}