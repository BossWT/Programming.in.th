#include <iostream>
using namespace std;
int main()
{
  int a,b,c,r;
  cin>>a>>b>>c;
  r=a+b+c;
  if(r>=80 && r<=100) cout<<"A";
  else if(r>=75 && r<=79) cout<<"B+";
  else if(r>=70 && r<=74) cout<<"B";
  else if(r>=65 && r<=69) cout<<"C+";
  else if(r>=60 && r<=64) cout<<"C";
  else if(r>=55 && r<=59) cout<<"D+";
  else if(r>=50 && r<=54) cout<<"D";
  else cout<<"F";
}
