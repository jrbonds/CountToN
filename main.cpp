#include <iostream>
using namespace std;

int CountToN(int n){
  if (n == 0){
    return 0;
  }
  else if (n > 0){
    cout << CountToN(n-1) << " ";
  }
  return n;
}


int main()
{
  cout << "Enter the number you would like to count to: ";
  int n = 0;
  cin >> n;
  cout << CountToN(n) << endl;
  return 0;
}