#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
        int n,a,zero=0;
        cin>>n;
        int num[n];
        for(int i=0; i<n; i++)
        {
                cin>>num[i];
                if(num[i] == 0)
                        zero++;
        }
        sort(num,num+n);
        for(int i=zero; i<n; i++)
        {
                cout<<num[i];
                if(i == zero)
                {
                        for(int j=0; j<zero; j++)
                                cout<<"0";
                }
        }
}
