#include "student.cpp"
#include <iostream>

using namespace std;

int main() {

  // creating object statically
  Student s1;
  Student s2;
  Student s3, s4, s5;

  // creating object dynamically
  Student *s6 = new Student;

  // initializing statically created object
  s1.setAge(21);
  s1.rollNumber = 114;

  s1.display();
  s2.display();

  cout << "S1 age: " << s1.getAge() << endl;
  cout << "S2 age: " << s2.getAge() << endl;

  // cout<<s1.age<<endl;
  cout << s1.rollNumber << endl;

  // initializing dynamically created object
  (*s6).setAge(25);
  (*s6).rollNumber = 200;
  (*s6).display();

  // can also be initialized as (*s6.age and s6->age are exactly same)
  s6->setAge(25);
  s6->rollNumber = 200;
  s6->display();
  cout << "S6: " << s6->getAge() << endl;

  return 0;
}