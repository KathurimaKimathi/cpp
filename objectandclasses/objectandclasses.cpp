#include <iostream>
using namespace std;

// Create a class
class Room {
  public:
    //Data members
    double length;
    double breadth;
    double height;

    // Member functions
    double calculateArea() {
      return length * breadth;
    }

    double calculateVolume() {
      return length * breadth * height;
    }
};

int main() {
  // Create an object of class Room
  Room room1;

  // Assign values to data members
  room1.length = 42.5;
  room1.breadth = 30.8;
  room1.height = 19.2;

  // Calculate and display the area and volume of the room
  cout << "Area of Room =  " << room1.calculateArea() << endl;
  cout << "Volume of Room =  " << room1.calculateVolume() << endl;

  return 0;
}