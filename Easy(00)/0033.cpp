#include <iostream>
#include <algorithm>
using namespace std;
int n,a,like[10001],re[10001],most;
int main()
{
        cin>>n;
        for(int i=0; i<n; i++)
        {
                cin>>a;
                like[a]++;
                re[a]++;
        }
        sort(like,like+10001);
        most = like[10000];
        for(int i=0; i<10001; i++)
        {
                if(re[i] == most)
                        cout<<i<<" ";
        }

}
