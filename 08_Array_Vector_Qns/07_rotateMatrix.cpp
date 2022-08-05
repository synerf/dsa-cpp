// You are given an n x n 2D matrix representing an image,
// rotate the image by 90 degrees (clockwise).

// You have to rotate the image in-place,
// which means you have to modify the input 2D matrix directly.
// DO NOT allocate another 2D matrix and do the rotation.

//     1  2  3         7  4  1
//     4  5  6   -->   8  5  2
//     7  8  9         9  6  3

// 2 step solution explaination

// First find transpose the matrix i.e swap(matrix[i][j], matrix[j],[i])

//     1  2  3         1  4  7
//     4  5  6   -->   2  5  8
//     7  8  9         3  6  9

// Second flip matrix horizontally (loop through row and flip each row
// horizontally)

//     1  4  7         7  4  1
//     2  5  8   -->   8  5  2
//     3  6  9         9  6  3

#include <iostream>
#include <vector>

using namespace std;

void printMatrix(vector<vector<int>>& matrix) {
  int len = matrix.size();
  for (int i = 0; i < len; i++) {
    for (int j = 0; j < len; j++) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
}

void rotateMatrix(vector<vector<int>>& matrix) {
  int len = matrix.size();

  // transpose the matrix
  for (int i = 0; i < len; i++) {
    for (int j = i; j < len; j++) {
      swap(matrix[i][j], matrix[j][i]);
    }
  }

  // print step 1 (transposed matrix)
  printMatrix(matrix);

  cout << endl;

  // flip matrix horizontally
  for (int i = 0; i < len; i++) {
    for (int j = 0; j < len / 2; j++) {
      swap(matrix[i][j], matrix[i][len - 1 - j]);
    }
  }

  // print step 2 (horizontally flipped matrix)
  printMatrix(matrix);
}

// runner
int main() {
  vector<vector<int>> vect = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  rotateMatrix(vect);
  return 0;
}