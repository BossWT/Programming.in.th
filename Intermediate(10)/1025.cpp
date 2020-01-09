#include <iostream>
using namespace std;
long long in,ans=1,n;
long long gcd(long long m,long long n)
{
        long long tmp;
        while(m)
        {
                tmp = m;
                m = n%m;
                n = tmp;
        }
        return n;
}
long long lcd(long long m,long long n)
{
        return m/gcd(m,n)*n;
}
int main()
{
        scanf("%lld",&n);
        for(int i=0; i<n; i++)
        {
                scanf("%lld",&in);
                ans = lcd(ans,in);
        }
        printf("%lld",ans);
}
