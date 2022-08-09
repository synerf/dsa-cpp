#include <iostream>

using namespace std;

// function to print char array
void print(char a[]) {
  // base case
  if (a[0] == '\0') return;

  // recusrion
  cout << a[0];
  print(a + 1);
}

// function to print char array in reverse
void reversePrint(char a[]) {
  // base case
  if (a[0] == '\0') return;

  // recusrion
  reversePrint(a + 1);
  cout << a[0];
}

// runner
int main() {
  char a[] = "abcd";

  print(a);

  cout << "\n---------------------" << endl;

  reversePrint(a);
}