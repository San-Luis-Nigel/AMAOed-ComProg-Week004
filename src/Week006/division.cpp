#include <iostream>

using namespace std;

int main() {
  float floatDividend, floatDivisor, max, min;
  max = std::numeric_limits<float>::max();
  min = std::numeric_limits<float>::lowest();

  cout << "Please enter your dividend: ";
  cin >> floatDividend;

  cout << "Please enter your divisor: ";
  cin >> floatDivisor;


  if (floatDivisor == 0) {
    cout << "Divisor should not be zero." << endl;
  } else if (floatDividend > max || floatDivisor > max) {
    cout << "Input value should not greater than max allowed value" << endl;
  } else if (floatDividend < min || floatDivisor < min ) {
    cout << "Input value should not lower than min allowed value" << endl;
  } else {
    cout << floatDividend / floatDivisor << endl;
  }

}
