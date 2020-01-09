#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;
int main()
{
  char c[10001];
  int len=0,cap=0,small=0;
  cin>>c;
  len = strlen(c);
  for(int i=0;i<len;i++)
  {
    if(isupper(c[i]))
    {
      cap++;
    }
    else
    {
      small++;
    }
  }
  if(cap == len) cout<<"All Capital Letter";
  else if(small == len) cout<<"All Small Letter";
  else cout<<"Mix";
}
