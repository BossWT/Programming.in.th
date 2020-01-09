#include <iostream>
using namespace std;
int main()
{
  int a[11],mod[43],rflag[43],count=0;
  for(int i=0;i<43;i++)
  {
    mod[i] = 0;
    rflag[i] = 0;
  }
  for(int i=0;i<10;i++)
  {
    cin>>(a[i]);
    mod[i] = a[i] % 42;
    rflag[mod[i]] = 1;
  }
  for(int i=0;i<43;i++)
  {
    if(rflag[i] == 1)
    {
      count++;
    }
  }
  cout<<count;
}
