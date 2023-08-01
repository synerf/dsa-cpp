#include <iostream>
#include <vector>

using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix) {

  //
  //       sc  ec
  //    sr 1 2 3
  //       4 5 6
  //    er 7 8 9
  //

  // to get the size (mxn)
  int m = matrix.size();
  int n = matrix[0].size();

  vector<int> ans;

  // if vector is empty, return as it is
  if (m == 0) return ans;

  int sr = 0, er = m - 1, sc = 0, ec = n - 1;
  int count = 0;

  while (sr <= er && sc <= ec) {
    // print sr
    for (int i = sc; i <= ec; i++) {
      ans.push_back(matrix[sr][i]);
      count++;
    }
    sr++;
    if (count == m * n) return ans;

    // print ec
    for (int i = sr; i <= er; i++) {
      ans.push_back(matrix[i][ec]);
      count++;
    }
    ec--;
    if (count == m * n) return ans;

    // print er
    for (int i = ec; i >= sc; i--) {
      ans.push_back(matrix[er][i]);
      count++;
    }
    er--;
    if (count == m * n) return ans;

    // print sc
    for (int i = er; i >= sr; i--) {
      ans.push_back(matrix[i][sc]);
      count++;
    }
    sc++;
    if (count == m * n) return ans;
  }

  return ans;
}

int main() {

  vector<vector<int>> vect{
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9}};

  // print spiral matrix answer
  vector<int> ans = spiralOrder(vect);

  for (int i = 0; i < ans.size(); i++) {
    cout << ans.at(i) << endl;
  }

  return 0;
}