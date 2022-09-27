#include <iostream>
using namespace std;

struct Person
{
    char name[50];
    int age;
    float salary;
};

void displayData(Person);

int main()
{
    Person p1;

    cout << "Enter full name: ";
    cin.get(p1.name, 50);

    cout << "Enter age: ";
    cin >> p1.age;
    
    cout << "Enter salary: ";
    cin >> p1.salary;

    displayData(p1);

    return 0;
}

void displayData(Person p)
{
    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;

    cout << "Salary: " << p.salary << endl;
}