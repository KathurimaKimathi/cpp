#include <iostream>
using namespace std;

struct Person
{
    char name[50];
    int age;
    float salary;
};

int main() {
    Person *ptr, p;

    ptr = &p;

    cout << "Enter full name: ";
    cin.get(ptr->name, 50); // Same as (*ptr).name

    cout << "Enter age: ";
    cin >> ptr->age; // Same as (*ptr).age

    cout << "Enter salary: ";
    cin >> ptr->salary; // Same as (*ptr).salary

    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << ptr->name << endl; // Same as (*ptr).name
    cout << "Age: " << ptr->age << endl; // Same as (*ptr).age
    cout << "Salary: " << ptr->salary << endl; // Same as (*ptr).salary

    return 0;
}