#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
  char a[10];
  char * p;
  p = (char*) &a;
  cout << "The value of a is: " << a << endl;
  cout << "The logical address of a is: " << &a << endl;
  cout << "The value of pointer of a is: " << p << endl;
  return EXIT_SUCCESS;
}
