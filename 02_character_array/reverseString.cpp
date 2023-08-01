#include <iostream>

using namespace std;

int length(char input[]) {
  int count = 0;
  for (int i = 0; input[i] != '\0'; i++) {
    count++;
  }
  return count;
}

void ads() {
}

void reverse(char input[]) {
  int start = 0;
  int end = length(input) - 1;
  while (start < end) {
    swap(input[start], input[end]);
    start++;
    end--;
  }
}

int main() {

  char name[100];
  cout << "Enter your name: ";
  cin.getline(name, 100);

  reverse(name);

  cout << "Reverse string is " << name << endl;
  return 0;
}
