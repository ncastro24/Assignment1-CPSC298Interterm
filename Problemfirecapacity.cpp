// assignment 1 problem 2: firecapacity
// Nayeli Castro
// Interterm 2020 CPSC 298-07
#include <iostream>
using namespace std;

int main(int argc, char **argv) {
  int capacity; //room capacity
  int people; // people who attended

  cout << "What is the room capacity of the meeting?: " << endl;
  cin >> capacity;

  cout << "How many people are attending the meeting?: " << endl;
  cin >> people;

  if (people <= capacity) {
    cout << "The amount of people does not exceed the fire capacity, so the meeting can take place." << endl;
  }
  else {
    cout << "There is too many people in the room. The meeting will not take place." << endl;
  }

  return 0;
}
