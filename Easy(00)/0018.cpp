#include <iostream>
using namespace std;
int n,k,prime[1001],flag[1001],a=2;
int main()
{
        int from=2;
        cin>>n>>k;
        for(i=2; i<=n; i++)
        {
                prime[i]
        }
        while(from<n)
        {
                flag = 0;
                for(int i=2; i<=from/2; i++)
                {
                        if(from % i == 0)
                        {
                                flag = 1;
                                break;
                        }
                }
                if(flag == 0)
                {
                        prime[from] = 1;
                }
                from++;
        }
        //cout<<prime[3];
}
