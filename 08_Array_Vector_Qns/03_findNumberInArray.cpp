#include <iostream>
#include <vector>

using namespace std;

// ans function
int findNumber(vector<int> &vect, int num) {
  for (int i = 0; i < vect.size(); i++) {
    if (vect.at(i) == num)
      return i;
  }
  return -1;
}

// runner
int main() {
  vector<int> vect{12, 78, 34, 14, 98, 26, 65};
  cout << findNumber(vect, 98) << endl;
}