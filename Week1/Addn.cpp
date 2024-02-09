#include <iostream>
using namespace std;
int main()
{
  int n,sum=0,a;
  cout<<"Enter the range of numbers :"<< endl;
  cin>>n;
  cout<<"Enter the numbers:"<< endl;
  for(int i=0;i<n;i++)
    {
    cin >> a;
    sum = sum + a;
    }
  cout<<"Sum of numbers is :"<<sum;
  return 0;
}
