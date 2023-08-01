#include <iostream>
#include <vector>

using namespace std;

// function to store position of occurences of an element in array
void storeAllPosition(int a[], int n, int x, int i, vector<int> &ans) {
  // base case
  if (i == n) return;

  // recursive case and calculation
  if (a[i] == x) {
    ans.push_back(i);
  }

  storeAllPosition(a, n, x, i + 1, ans);
}

int main() {
  int n = 5;
  int a[n] = {1, 2, 1, 4, 1};

  vector<int> ans = {};
  storeAllPosition(a, n, 1, 0, ans);

  for (auto &&x : ans) {
    cout << x << " ";
  }
}