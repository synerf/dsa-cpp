#include <iostream>

using namespace std;

// funrction to convert string to int
int stringToInt(char s[], int n) {
  // base case
  if (n == 0) return 0;

  // recursion
  int smallAns = stringToInt(s, n - 1);

  // calculation
  int lastDigit = s[n - 1] - '0';    // because, char - char = int
  return smallAns * 10 + lastDigit;  // eg. 1234 * 10 + 5 = 12345
}

// runner
int main() {
  char s[] = "12345";
  int n = (sizeof(s) / sizeof(s[0])) - 1;  // -1 to exclude '\0' character
  int ans = stringToInt(s, n);
  cout << ans;
}