#include <iostream>
using namespace std;

class Student {

    public:
        double marks;

        // Parameterized Constructor to initialize marks
        Student(double m) {
            marks = m;
        }
};

// Function with objects as parameters
void calculateAverage(Student s1, Student s2) {
    double average = (s1.marks + s2.marks) / 2;
    
    cout << "Average Marks = " << average << endl;
}

int main() {
    Student s1(90.5), s2(85.5);

    calculateAverage(s1, s2);

    return 0;
}