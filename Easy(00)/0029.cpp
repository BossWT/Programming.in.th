#include <iostream>
#include <cmath>
using namespace std;
int main()
{
        float x,y,z;
        cin>>x>>y;
        if(y>x)
        {
                z=ceil(y/x);
                cout<<z;
        }
        else
                cout<<"2";
}
