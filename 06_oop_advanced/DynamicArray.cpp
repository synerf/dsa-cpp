#include <iostream>

using namespace std;

class DynamicArray {
  int *data;
  int nextIndex;
  int capacity; // total size of array

  public:
  DynamicArray() {
    data = new int[5];
    nextIndex = 0;
    capacity = 5;
  }

  DynamicArray(DynamicArray const &d) {
    this->nextIndex = d.nextIndex;
    this->capacity = d.capacity;
    this->data = new int[d.capacity];
    for (int i = 0; i < d.nextIndex; i++) {
      this->data[i] = d.data[i];
    }
  }

  DynamicArray(int c) {
    data = new int[5];
    nextIndex = 0;
    capacity = c;
  }

  void operator=(DynamicArray const &d) {
    this->nextIndex = d.nextIndex;
    this->capacity = d.capacity;
    this->data = new int[d.capacity];
    for (int i = 0; i < d.nextIndex; i++) {
      this->data[i] = d.data[i];
    }
  }

  void add(int element) {
    if (nextIndex == capacity) {
      int *newData = new int[2 * capacity];
      for (int i = 0; i < capacity; i++) {
        newData[i] = data[i];
      }
      delete[] data;
      data = newData;
      capacity = capacity * 2;
    }
    data[nextIndex] = element;
    nextIndex++;
  }

  void add(int element, int i) {
    if (i < nextIndex) {
      data[i] = element;
    } else if (i == nextIndex) {
      add(element);
    } else {
      return;
    }
  }

  int getElement(int i) const {
    if (i >= 0 && i < nextIndex) {
      return data[i];
    } else {
      return -1;
    }
  }

  int getCapacity() const {
    return capacity;
  }

  void print() const {
    for (int i = 0; i < nextIndex; i++) {
      cout << data[i] << " ";
    }
    cout << endl;
  }
};