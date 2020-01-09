#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int main()
{
        short n,len;
        cin>>n;
        string a;
        string ans[n];
        for(int i=0; i<n; i++)
        {
                cin>>a;
                len = a.length();
                reverse(a.begin(),a.end());
                if(len == 1)
                {
                        if(a[0] - '0' == 2 or a[0] - '0' == 1)
                                ans[i] = 'T';
                        else
                        {
                                if((a[0] - '0') % 2 == 0)
                                        ans[i] = 'F';
                                else
                                        ans[i] = 'T';
                        }
                }
                else
                {
                        if((a[0]-'0') % 2 == 0)
                                ans[i] = 'F';
                        else
                                ans[i] = 'T';
                }
        }
        for(int i=0; i<n; i++)
                cout<<ans[i]<<endl;
}
