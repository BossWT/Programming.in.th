#include <iostream>
#include <climits>
using namespace std;
int main()
{
        int n;
        cin>>n;
        int a[n],m=INT_MIN,first,last,sum=0,s;
        for(int i=0; i<n; i++)
                cin>>a[i];
        for(int i=0; i<n; i++)
        {
                sum+=a[i];
                if(sum>m)
                {
                        m = sum;
                        first = s;
                        last = i;
                }
                if(sum < 0)
                {
                        sum = 0;
                        s = i+1;
                }
        }
        if(m <= 0)
                cout << "Empty sequence";
        else
        {
                for(int i=first; i<=last; i++)
                {
                        cout<<a[i]<<" ";
                }
                cout<<endl<<m;
        }
}
