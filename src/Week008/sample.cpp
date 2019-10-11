#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
  int n;

  while(true){
    if(cin.fail()) {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } else if (n < 1 || n > 10) {
      cout << "Enter the number of elements: ";
      cin >> n;
    } else {
      break;
    }
  }

  int x[n];

  for(int i = 0; i < n; i++)
  {
    cout << "Number[" << i + 1 << "]: ";
    cin >> x[i];
  }
  cout << endl;

  int sum = 0;
  for(int i = 0; i < n; i++)
  {
    sum += x[i];
  }

  cout << "The sum of the " << n << " number(s) is: " << sum << endl;

  cout << endl;
  return EXIT_SUCCESS;
}
