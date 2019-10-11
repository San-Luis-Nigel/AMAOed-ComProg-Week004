#include <iostream>

using namespace std;

int main() {
  int intOption;
  cout << "Please enter an integer: ";
  cin >> intOption;
  if (intOption == 0) {
    cout << "Hello World" << endl;
  } else if (intOption == 1) {
    cout << "I am Groot" << endl;
  } else if (intOption == 2) {
    cout << "To the Top" << endl;
  } else if (intOption == 3) {
    cout << "Where is the Horizon" << endl;
  } else if (intOption == 4) {
    cout << "I do not know" << endl;
  } else {
    cout << "Yeah, I will." << endl;
  }

}
