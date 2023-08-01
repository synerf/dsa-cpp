#include <cstring>
#include <iostream>

using namespace std;

void printAllPrefixes(char str[]) {
  for (int e = 0; e < strlen(str); e++) {
    for (int s = 0; s <= e; s++) {
      cout << str[s];
    }
    cout << endl;
  }
}

int main() {

  char str[] = "abcd";
  printAllPrefixes(str);

  return 0;
}