// Hare Krishna 
// Learning Control Flow

#include <iostream>
#include <string>

using namespace std;

void greet() {
  string n;
  cout << "Enter name please : ";
  cin >> n;
  cout <<"Welcome " << n << endl;
  cout <<"This program will help you\nto calculate your bill\n";
  cout <<"please follow the instructions\n";
}

int bill (int d, double t) {
  double grossAmount;


  cout << "Total Amount : " << t << endl;
  cout << "Discount : " << d << "% \n";

  grossAmount = t - (t*(d * 0.01));

  cout << "Payable Amount :" << grossAmount << endl;

  return 0;
}

int main () {
  double totalAmount;

  // we are declaring variable here
  int discount;

  // greeting the user
  // calling external function
  greet();

  cout << "Enter total amount :";
  cin >> totalAmount;

  // making logical comparison
  // we are setting the value of 
  // discount using if else
  if (totalAmount > 4999 && totalAmount < 10000) {
    discount = 10;
  } else if (totalAmount > 10000) {
    discount = 15;
  } else {
    discount = 3;
  }

  // calling external function again
  bill (discount, totalAmount);

  return 0;
}

