#include <iostream>
#include <vector>

using namespace std;

void selectionSort(vector<int> &vect) {
  for (int i = 0; i <= vect.size() - 2; i++) {
    int smallest = i;
    for (int j = i + 1; j <= vect.size() - 1; j++) {
      if (vect[j] < vect[smallest]) {
        smallest = j;
      }
    }
    swap(vect[i], vect[smallest]);
  }
}

int main() {
  vector<int> vect = {7, 5, 3, 8, 2};

  for (auto x : vect) {
    cout << x << " ";
  }
  cout << endl;

  selectionSort(vect);

  for (auto x : vect) {
    cout << x << " ";
  }

  return 0;
}