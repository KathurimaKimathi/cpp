#include <iostream>

using namespace std;

// This is an example of implicit type conversion
int main() {
    int num1;
    double num2 = 256.783;

    // Here, we're doing an implicit conversion from double to int
    num1 = num2; // Implicit conversion

    cout << "num1 = " << num1 << endl;


    return 0;
}