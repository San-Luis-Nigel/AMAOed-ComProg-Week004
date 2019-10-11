#include <iostream>

using namespace std;

int main () {
  int intHeight;
  cout << "Please enter height: ";
  cin >> intHeight;

  for(int i = 0; i < intHeight; i++)
  {
    for(int t = 0; t < intHeight - i - 1; t++)
    {
      cout << " ";
    }
    for(int t = 0; t < (i * 2) + 1; t++)
    {
      cout << "*";
    }
    cout << endl;
  }
}
