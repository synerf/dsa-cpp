#include <iostream>

using namespace std;

int main() {

  cout << "Enter the number of elements" << endl;

  // input array length
  int n;
  cin >> n;

  // input elements of array
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  // print array elements
  for (int i = 0; i < n; i++) {
    cout << a[i];
  }
  cout << endl;

  // find the largest element in array
  int largest = INT_MIN;
  for (int i = 0; i < n; i++) {
    if (a[i] > largest) {
      largest = a[i];
    }
  }

  // print the largest element
  cout << "Largest element: " << largest << endl;

  // find the smallest element in array
  int smallest = INT_MAX;
  for (int i = 0; i < n; i++) {
    if (a[i] < smallest) {
      smallest = a[i];
    }
  }

  // print the largest element
  cout << "Smallest element: " << smallest << endl;

  return 0;
}