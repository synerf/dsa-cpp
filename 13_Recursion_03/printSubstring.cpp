#include <iostream>

using namespace std;

void printSubstring(string input, string output) {
  // base case
  if (input.length() == 0) {
    cout << output << endl;
    return;
  }

  // recursion
  printSubstring(input.substr(1), output);
  printSubstring(input.substr(1), output + input[0]);
}

int main() {
  string input;
  cin >> input;
  string output = "";
  printSubstring(input, output);
}