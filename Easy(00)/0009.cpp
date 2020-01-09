#include <iostream>
using namespace std;
int main()
{
  int a[3],min,mid,max;
  char str[3];
  cin>>a[0]>>a[1]>>a[2];
  cin>>str;
  min=a[0];
  max=a[0];
  for(int i=0;i<3;i++)
  {
    if(a[i] > max)
    {
      max = a[i];
    }
    if(a[i] < min)
    {
      min = a[i];
    }
  }
  for(int i=0;i<3;i++)
  {
    if(a[i]> min && a[i] < max)
    {
      mid = a[i];
    }
  }
  for(int i=0;i<3;i++)
  {
    if(str[i] == 'A')
    {
      cout<<min;
      if(i!=2) cout << " ";
    }
    else if(str[i] == 'B')
    {
      cout<<mid;
      if(i!=2) cout << " ";
    }
    else
    {
      cout<<max;
      if(i!=2) cout << " ";
    }
  }
}
