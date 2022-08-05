#include <iostream>

using namespace std;

// function to perform linear search
// iterate over array
// check each element if equal to search key

int linearSearch(int a[], int n, int key) {
  for (int i = 0; i < n; i++) {
    if (a[i] == key) {
      return i;
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
  cout << "Enter the key to search:" << endl;
  int key;
  cin >> key;

  // run linear search function
  int pos = linearSearch(a, n, key);

  // handle output
  if (pos == -1) {
    cout << "Key not found" << endl;
  } else {
    cout << "Key found at index " << pos << endl;
  }
}