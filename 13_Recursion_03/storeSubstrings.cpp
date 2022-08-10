#include <iostream>
#include <vector>

using namespace std;

void storeSubstring(string input, string output, vector<string> &v) {
  // base case
  if (input.length() == 0) {
    v.push_back(output);
    return;
  }

  // recursion
  storeSubstring(input.substr(1), output, v);
  storeSubstring(input.substr(1), output + input[0], v);
}

int main() {
  string input;
  cin >> input;
  string output = "";
  vector<string> v;
  storeSubstring(input, output, v);

  for (auto &x : v) {
    cout << x << endl;
  }
}