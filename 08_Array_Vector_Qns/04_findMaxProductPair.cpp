// from given array of positive integers, find pair that results in maximum product in an array
// arr = [2, 5, 3, 6]    output = [5, 6]   since it gives max product of 30

#include <iostream>
#include <vector>

using namespace std;

// solution
vector<int> findMaxProductPair(vector<int> vect) {
  int max1 = 0, max2 = 0;
  for (int i = 0; i < vect.size(); i++) {
    if (vect[i] > max1) {
      if (max1 > max2) {
        max2 = max1;
      }
      max1 = vect[i];
    } else if (vect[i] > max2)
      max2 = vect[i];
  }
  cout << max1 * max2 << endl;
  return {max1, max2};
}

// runner
int main() {

  vector<int> vect{2, 7, 4, 5, 9, 3, 8};
  vector<int> ans = findMaxProductPair(vect);

  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }
}