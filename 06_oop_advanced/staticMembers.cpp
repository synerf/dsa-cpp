class Student {

  static int totalStudents;  // does not belong to an object(student) but to the class itself

  public:
    int rollNumber;
    int age;

    Student() {
      totalStudents++;
    }

    // can also make static functions - belongs to class itself and not to an object
    // static functions can only access static data members and can call only static functions
    // they dont have access to 'this' keyword
    static int getTotalStudents() {   
      return totalStudents; 
    }

};

int Student::totalStudents = 0;   // can initialize static data members outside the class only