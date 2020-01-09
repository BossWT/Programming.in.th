#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
        int l,n,diff;
        scanf("%d %d",&l,&n);
        char ch[n+1][l+1];
        string last;
        for(int i=0; i<n; i++)
                scanf("%s",ch[i]);
        for(int i=0; i<n; i++)
        {
                diff = 0;
                for(int j=0; j<l; j++)
                        if(ch[i][j] != ch[i+1][j])
                                diff++;
                if(diff > 2)
                {
                        printf("%s",ch[i]);
                        break;
                }
        }
}
