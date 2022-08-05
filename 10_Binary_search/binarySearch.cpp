#include <algorithm>
#include <iostream>

using namespace std;

// function to perform binary search
int binarySearch(int a[], int n, int key) {
  int s = 0, e = n - 1, mid;
  while (s <= e) {
    mid = (s + e) / 2;
    if (a[mid] == key) {
      return mid;
    } else if (mid[a] > key) {
      e = mid - 1;
    } else {
      s = mid + 1;
    }
  }
  return -1;
}

int main() {
  // prepare array
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  // take search key from user
  int key;
  cout << "Enter search key:" << endl;
  cin >> key;

  // sort the array (binary search works only on sorted array)
  sort(a, a + n);

  // call binary search function
  int pos = binarySearch(a, n, key);

  // handle output
  if (pos == -1) {
    cout << "Key not found" << endl;
  } else {
    cout << "Key found at index " << pos << endl;
  }
}