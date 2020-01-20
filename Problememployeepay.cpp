// assignment 1 problem 3: employeepay
// Nayeli Castro
// Interterm 2020 CPSC 298-07
#include <iostream>
using namespace std;

int main(int argc, char **argv) {
  float employeepay = 16.0; //paid $16 per hr
  int hours;
  float grosspay;

  cout << "This program calculates you gross pay, each withholding amount, and the net take-home pay for the week if you earn $16 per hour." << endl;
  cout << "Enter how many hours you worked this week: " << endl;
  cin >> hours;

  // gross pay calculated

  if (hours <= 40) { //regular amount of hours is 40 a week
    grosspay = employeepay * hours;
  }
  else { //overtime
    grosspay = (((16.0 * 1.5)*(hours - 40)) + (16.0 * 40));
  }

  // taxes calculated

  float sstax = 0.06 * grosspay; // social security tax
  float fedtax = 0.14 * grosspay; // federal income tax
  float statetax = 0.05 * grosspay; // state income tax
  float med = 10.0; // medical insurance

  // take home pay

  float withheld = sstax + fedtax + statetax + med; // amount of money withheld because of taxes
  float netpay = grosspay - withheld;

  // printing

  cout << "Your gross pay is $" << grosspay << endl;
  cout << "Social security tax: $" << sstax << endl;
  cout << "Federal income tax: $" << fedtax << endl;
  cout << "State income tax: $" << statetax << endl;
  cout << "Money removed each week for medical insurance: $" << med << endl;
  cout << "Total amount of money withheld: $" << withheld << endl;
  cout << "Netpay: $" << netpay << endl;

  return 0;

}
