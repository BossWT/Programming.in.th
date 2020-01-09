#include <iostream>
using namespace std;
int main()
{
  int n,a[1001];
  long min,max;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    if(i == 0)
    {
      min = a[i];
      max = a[i];
    }
    if(a[i] < min)
    {
      min = a[i];
    }
    if(a[i] > max)
    {
      max = a[i];
    }
  }
  cout<<min<<endl<<max;
}
