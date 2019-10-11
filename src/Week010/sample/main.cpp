#include <cstdlib>
#include <iostream>
#include "subject.h"

using namespace std;

int main()
{
  Subject comp("Computer Programming 1", "IT001", 3);

  cout << "Subject Details: " << comp.getSubject() << endl;

  cout << endl;
  return EXIT_SUCCESS;
}
