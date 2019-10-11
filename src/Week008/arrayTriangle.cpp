#include <iostream>

using namespace std;

int main () {
  int intHeight, i, k;

  while(true){
    if(cin.fail()) {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } else if (intHeight < 1 || intHeight > 10) {
      cout << "Please enter height (1 - 10): ";
      cin >> intHeight;
    } else {
      break;
    }
  }

  char arr[10] = {'A','B','C','D','E','F','G','H','I','J'};
  for(i = 0; i < intHeight; i++)
  {
    for(k = 0; k < intHeight - i - 1; k++)
    {
      cout << " ";
    }
    for(k = 0; k < (i * 2) + 1; k++)
    {
      cout << arr[i];
    }
    cout << endl;
  }
  return EXIT_SUCCESS;
}
