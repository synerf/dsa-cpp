#include "student.cpp"
#include <iostream>

using namespace std;

int main() {

  Student s1;
  s1.display();

  Student s2;
  s2.display();

  Student *s3 = new Student;
  s3->display();

  Student s4(10);
  s4.display();

  Student *s5 = new Student(20);
  s5->display();

  Student s6(10, 100);
  s6.display();

  // copy constructor
  cout << "Example of copy constructor" << endl;

  Student s7(30, 200);
  cout << "S7: ";
  s7.display();

  Student s8(s7); // internal copy contructor will be called
  cout << "S8: ";
  s8.display();

  // copy assignment operator
  Student s9(10, 100);
  Student s10(20, 200);

  s10 = s9; // copy assignment operator

  s9.display();
  s10.display();

  // destructor for dynamically created objects need to be called manually be using 'delete' keyword
  delete s3;
  delete s5;

  return 0;
}