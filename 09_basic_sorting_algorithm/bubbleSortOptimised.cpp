#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int> &vect) {
  int count = 1;
  while (count <= vect.size() - 1) {
    int flag = 0;
    for (int i = 0; i <= vect.size() - 2; i++) {
      if (vect[i] > vect[i + 1]) {
        swap(vect[i], vect[i + 1]);
        flag = 1;
      }
    }
    if (flag == 0) {  // array is sorted, come out of the loop
      break;
    }

    count++;
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