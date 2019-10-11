#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  float a[20];
  float (&r)[20] = a;
  cout << "The value of a is: " << a << endl;
  cout << "The logical address of a is: " << &a << endl;
  cout << "The value of reference  is: " << r << endl;
  return EXIT_SUCCESS;
}
