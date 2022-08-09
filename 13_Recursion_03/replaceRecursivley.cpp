#include <iostream>

using namespace std;

// function to replace char with another char
void replace(char s[], char a, char x) {
  // base case
  if (s[0] == '\0') return;

  // calculation
  if (s[0] == a) s[0] = x;

  // recursion
  replace(s + 1, a, x);
}

// runner
int main() {
  char s[] = "absauag";

  replace(s, 'a', 'x');

  for (auto &i : s) {
    cout << i << " ";
  }
}