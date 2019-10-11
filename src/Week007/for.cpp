#include <iostream>

using namespace std;

int main () {
  int intHeight;
  cout << "Please enter height: ";
  cin >> intHeight;

  for(int i = 0, j = 0; i < intHeight; i++,j+=2)
  {
    for(int k = 0; k < (intHeight * 2) - j - 2; k++)
    {
      cout << " ";
    }
    for(int k = 0; k <= j; k++)
    {
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}
