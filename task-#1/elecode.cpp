#include <iostream>
using namespace std;

int main ()
{
  int x;
  cout<<"Enter the coordinate of the friend's house "; cin >> x;
  
  int ans = x / 5 + (x % 5 ? 1 : 0);
  
  cout <<"\nThe minimum number of steps required by the elephant is "<< ans;
  return 0;
}
