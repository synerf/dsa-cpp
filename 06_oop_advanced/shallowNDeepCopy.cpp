#include<iostream>
#include<cstring>

using namespace std;

class Student {
  int age;

  public:
    char *name;

    // custom deep copy construcotr (inbuilt copy constructor is shallow copy)
    Student(Student const &s) {
      this->age = s.age;
      this->name = new char[strlen(s.name) +1];
      strcpy(this->name, s.name);
    }

    Student(int age, char *name) {
      this->age = age;
      // this->name = *name;   // shallow copy - copy only the address
      this->name = new char[strlen(name) + 1];   // +1 to also copy the null character
      strcpy(this->name, name);
    }

    void display() {
      cout<<name<<" "<<age<<endl;
    }

};

int main() {

  char name[] = "abcd";

  Student s1(21, name);
  s1.display();

  // name[3] = 'e';

  // Student s2(30, name);
  // s2.display();

  // s1.display();

  Student s2(s1); // copy constructor called
  s2.name[0] = 'x';
  s1.display();
  s2.display();

  return 0;
}