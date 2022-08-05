#include<iostream>
#include "staticMembers.cpp"

using namespace std;

int main() {

  Student s1;
  cout<<s1.rollNumber<<" "<<s1.age<<endl;

  cout<<Student::getTotalStudents()<<endl;   // access static member syntax - className::dataMember

  Student s2;
  Student s3;

  cout<<Student::getTotalStudents()<<endl;

  return 0;
}