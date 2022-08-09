#include <iostream>

using namespace std;

// fucntion to length of array
int lengthOfArr(char a[]) {
  // base case
  if (a[0] == '\0') return 0;

  // recursion
  int smallAns = lengthOfArr(a + 1);
  return 1 + smallAns;
}

// runner
int main() {
  char a[] = "abscd";

  cout << lengthOfArr(a);
}