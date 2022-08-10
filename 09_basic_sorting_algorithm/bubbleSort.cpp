#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int> &vect) {
  for (int i = 0; i < vect.size() - 1; i++) {
    for (int j = 0; j < vect.size() - i - 1; j++) {
      if (vect[j] > vect[j + 1]) {
        swap(vect[j], vect[j + 1]);
      }
    }
  }
}

int main() {
  vector<int> vect = {3, 5, 2, 4, 7, 1};

  for (auto &x : vect) {
    cout << x << " ";
  }

  cout << endl;

  bubbleSort(vect);

  for (auto &x : vect) {
    cout << x << " ";
  }

  return 0;
}