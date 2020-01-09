#include <iostream>
using namespace std;
int main()
{
  int m,n;
  long a[101][101],b[101][101],c[101][101];
  cin>>m>>n;
  for(int i=1;i<=m;i++)
  {
    for(int j=1;j<=n;j++)
    {
      cin>>a[i][j];
    }
  }
  for(int i=1;i<=m;i++)
  {
    for(int j=1;j<=n;j++)
    {
      cin>>b[i][j];
    }
  }
  for(int i=1;i<=m;i++)
  {
    for(int j=1;j<=n;j++)
    {
      c[i][j] = a[i][j] + b[i][j];
    }
  }
  for(int i=1;i<=m;i++)
  {
    if(i!=1) cout<<endl;
    for(int j=1;j<=n;j++)
    {
      cout<<c[i][j]<<" ";
    }
  }
}
