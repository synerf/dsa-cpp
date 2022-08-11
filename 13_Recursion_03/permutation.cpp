#include <iostream>

using namespace std;

// function to print permutations of given string
void printPermutation(char str[], int i = 0) {
  // base case
  if (str[i] == '\0') {
    cout << str << endl;
    return;
  }

  // recursion
  for (int j = i; str[j] != '\0'; j++) {
    swap(str[i], str[j]);
    printPermutation(str, i + 1);
    swap(str[i], str[j]);
  }
}

// runner
int main() {
  char str[] = "ABC";
  printPermutation(str);

  return 0;
}