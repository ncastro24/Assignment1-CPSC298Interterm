// assignment 1 problem 4: inflation
// Nayeli Castro
// Interterm 2020 CPSC 298-07
#include <iostream>
using namespace std;

int main(int argc, char **argv) {
  float itemcost; // the cost of the item
  int years; // amount of years
  float inflation; // rate of inflation

// user inputs

  cout << "This program calculates the cost of an item after inputted years while taking inlfation into account." << endl;

  cout << "Enter the cost of your item: " << endl;
  cin >> itemcost;

  cout << "Enter the amount of years you want to calculate it for: " << endl;
  cin >> years;

  cout << "Enter the rate of inflation in percentage form: " << endl;
  cin >> inflation;

// for loop and inflation converting

  float fraction = inflation * .01; //converting percentage of inflation into fraction form

  for (int i = 0; i < years; ++i) {
    itemcost += fraction * itemcost;
    itemcost = (100 * itemcost)/100; //converting to dollar
  }

  cout << "The item will cost $" << itemcost << " in " << years << " years " << "with an inflation rate of " << inflation << "%." << endl;

  return 0;

}
