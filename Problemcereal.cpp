// assignment 1 problem 1: cereal
// Nayeli Castro
// Interterm 2020 CPSC 298-07
#include <iostream>
using namespace std;

int main(int argc, char **argv) {
  float cereal; // weigh of cereal
  float ton = 35273.92; // weigh of a ton
  float totalw; // total weight of cereal in tons
  float boxes; // the ammount of boxes needed to have 1 ton of cereal

  cout << "This is a program that calculates the weight of cereal in tons." << endl;
  cout << "How much does your box of cereal weigh? (in ounces): " << endl;
  cin >> cereal;

  totalw = (cereal)/(ton);
  boxes = (ton)/(cereal);

  cout << "Your cereal is " << totalw << " tons." << endl;
  cout << "You need " << boxes << " boxes of cereal for 1 ton of cereal." << endl;

  return 0;
}
