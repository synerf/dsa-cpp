#include <iostream>

using namespace std;

// function to calculate number of times an element occurs in array using
// recursion
void countOccurences(int a[], int n, int x, int i, int& ans) {
  // base case
  if (i == n) return;

  // recursive case
  if (a[i] == x) {
    ans++;
  }
  countOccurences(a, n, x, i + 1, ans);
}

// runner
int main() {
  int n = 5;
  int a[n] = {1, 2, 3, 1, 4};

  int ans = 0;
  countOccurences(a, n, 1, 0, ans);

  cout << ans;
}