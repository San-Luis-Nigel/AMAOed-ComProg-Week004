#include <iostream>
#include <string>

using namespace std;

int main()
{
  string strName, strPassword, strAddress;
  cout << "Enter your name: ";
  getline(cin,strName);
  cout << "Enter your password: ";
  getline(cin,strPassword);
  cout << "Enter your address: ";
  getline(cin,strAddress);
  cout << "Hi, I am " << strName << ". I live at " << strAddress << ".\n";
}
