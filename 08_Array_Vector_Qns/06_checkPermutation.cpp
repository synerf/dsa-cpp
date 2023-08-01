// write a function to check if two arrays are permutation
// of each other

// arr1 = [4, 5, 2, 3, 1]
// arr2 = [1, 4, 6, 3, 8]
// output - false (0)

// arr1 = [2, 4, 5, 3, 1]
// arr2 = [1, 5, 4, 3, 2]
// output - true  (1)

#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

bool isPermutation(vector<int> &vect1, vector<int> &vect2) {
  if (vect1.size() != vect2.size())
    return false;
  sort(vect1.begin(), vect1.end());
  sort(vect2.begin(), vect2.end());
  if (vect1 == vect2)
    return true;
  else
    return false;
}

int main() {
  vector<int> vect1 = {2, 4, 5, 3, 1};
  vector<int> vect2 = {1, 5, 4, 3, 2};

  bool ans = isPermutation(vect1, vect2);
  cout << ans << endl;
}