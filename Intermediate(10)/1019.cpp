#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int t[1001][1001],row,col,ma,st;
int main()
{
        string str1,str2;
        cin>>str1>>str2;
        int m=str1.length();
        int n=str2.length();
        for(int i=0; i<=m; i++)
        {
                for(int j=0; j<=n; j++)
                {
                        if(i==0 || j==0)
                                t[i][j] = 0;
                        else if(str1[i-1] == str2[j-1])
                                t[i][j] = t[i-1][j-1]+1;
                        if(t[i][j] > ma)
                        {
                                ma = t[i][j];
                                st = i-ma;
                        }
                }
        }
        for(int i=st; i<st+ma; i++)
                cout<<str1[i];
}
