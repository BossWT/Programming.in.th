#include <iostream>
using namespace std;
int main()
{
        int m,d,sum=0;
        int days [12] = {31,28,31,30,31,30,31,31,30,31,30,31};
        cin>>d>>m;
        for(int i=0; i<m-1; i++)
                sum+=days[i];
        sum+=d;
        if(sum%7 == 1)
                cout<<"Thursday";
        else if(sum%7 == 2)
                cout<<"Friday";
        else if(sum%7 == 3)
                cout<<"Saturday";
        else if(sum%7 == 4)
                cout<<"Sunday";
        else if(sum%7 == 5)
                cout<<"Monday";
        else if(sum%7 == 6)
                cout<<"Tuesday";
        else
                cout<<"Wednesday";
}
