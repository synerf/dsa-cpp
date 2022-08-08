#include <iostream>

using namespace std;

// function to check palindrome using recursion
bool checkPalindrome(int a[], int n, int start, int end) {
  // base case
  if (start > end) {
    return true;
  }

  // calculation
  if (a[start] == a[end]) {
    return checkPalindrome(a, n, start + 1, end - 1);
  } else {
    return false;
  }
}

// runner
int main() {
  int n = 5;
  int a[n] = {1, 2, 3, 2, 1};

  bool ans = checkPalindrome(a, n, 0, n - 1);

  if (ans)
    cout << "Palindrome";
  else
    cout << "Not palindrome";
}