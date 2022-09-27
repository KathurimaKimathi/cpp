#include <iostream>
using namespace std;

class Student {
   public:
    double marks1, marks2;
};

// Function returning an object of student
Student createStudent() {
    Student s;

    // Initializing member variables of s
    s.marks1 = 90.5;
    s.marks2 = 85.5;

    // Print the values of member variables
    cout << "Marks1 = " << s.marks1 << endl;
    cout << "Marks2 = " << s.marks2 << endl;

    return s;
}

int main() {
    Student s;
    
    s = createStudent();

    // Alternatively, we can do the following
    // Student s = createStudent();

    return 0;
}