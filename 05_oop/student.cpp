#include <iostream>

using namespace std;

class Student {

  int age;

  public:
  // default constructor
  Student() {
    cout << "Constructor called" << endl;
  }

  // parameterized construcotr
  Student(int rollNumber) {
    cout << "Parameterized constructor called" << endl;
    this->rollNumber = rollNumber;
  }

  Student(int a, int r) {
    cout << "Parameterized Constructor 2 called" << endl;
    age = a;
    rollNumber = r;
  }

  // properties and methods
  int rollNumber;

  void display() {
    cout << age << " " << rollNumber << endl;
  }

  int getAge() {
    return age;
  }

  void setAge(int a) {
    if (age < 0) {
      return;
    }
    age = a;
  }

  // destructor (will destroy only statically created object,
  //              dynamically created objects should be destroyed manually)
  ~Student() {
    cout << "Destructor called" << endl;
  }
};