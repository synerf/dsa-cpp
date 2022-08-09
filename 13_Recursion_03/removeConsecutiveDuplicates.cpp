#include <iostream>

using namespace std;

// function to remove consecutive duplicate chars
void removeDuplicate(char s[]) {
  // base case
  if (s[0] == '\0') return;

  // calculation (recusrion)
  if (s[0] == s[1]) {
    for (int i = 0; s[i] != '\0'; i++) {
      s[i] = s[i + 1];
    }
    removeDuplicate(s);
  } else {
    removeDuplicate(s + 1);
  }
}

// runner
int main() {
  char s[] = "aabdchhhls";
  cout << s << endl;
  removeDuplicate(s);
  cout << s << endl;
  return 0;
}