#include <iostream>
using namespace std;

int main() {
    
  // initialize a 2D array
  int numbers[2][3] = {
    {1, 2, 3}, 
    {4, 5, 6}
    };

  cout << "The numbers are: " << endl;

  //  print array elements
  // use of nested for loop

  //1. Access rows of the array
  for (int i = 0; i < 2; ++i) {

    //2. Access columns of the array
    for (int j = 0; j < 3; ++j) {
      cout << "numbers[" << i << "][" << j << "] = " << numbers[i][j] << endl;
    }

  }

  return 0;
}