#include <iostream>

using namespace std;

int main() {
    double marks;

    cout << "Enter your marks: \n";
    cin >> marks;

    // ternary operator to check if marks is greater than 50
    string result = (marks > 50) ? "Passed" : "Failed";

    cout << "You " << result << " the exam.\n";
}