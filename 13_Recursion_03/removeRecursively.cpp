#include <iostream>

using namespace std;

// function to remove given char from char array
void removeElement(char s[], char x) {
  // base case
  if (s[0] == '\0') return;

  // recursion
  if (s[0] == x) {
    for (int i = 0; s[i] != '\0'; i++) {
      s[i] = s[i + 1];
    }
    removeElement(s, x);
  } else {
    removeElement(s + 1, x);
  }
}

// runner
int main() {
  char s[] = "abcadafd";
  cout << s << endl;

  removeElement(s, 'a');

  cout << s << endl;

  return 0;
}