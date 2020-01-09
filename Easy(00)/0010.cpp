#include <iostream>
#include <string.h>
using namespace std;
int main()
{
  char str[51];
  int len,pos = 1;
  cin>>str;
  len=strlen(str);
  for(int i=0;i<len;i++)
  {
    if(str[i] == 'A')
    {
      if(pos == 1)
      {
        pos = 2;
      }
      else if(pos ==2)
      {
        pos = 1;
      }
    }
    else if(str[i] == 'B')
    {
      if(pos == 2)
      {
        pos = 3;
      }
      else if(pos == 3)
      {
        pos = 2;
      }
    }
    else if(str[i] == 'C')
    {
      if(pos == 1)
      {
        pos = 3;
      }
      else if(pos == 3)
      {
        pos = 1;
      }
    }
  }
  cout<<pos;
}
