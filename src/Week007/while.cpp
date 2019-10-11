#include <iostream>

using namespace std;

int main () {
  int intHeight, intWidth, intLine;
  cout << "Please enter height: ";
  cin >> intHeight;
  intWidth = 0;
  while(intHeight > 0){
    intLine = intWidth;
    while(intLine >= 0) {
      cout << "*";
      intLine--;
    }
    cout << endl;
    intHeight--;
    intWidth += 2;
  }

  return 0;
}
