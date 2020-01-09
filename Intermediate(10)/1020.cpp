#include "/Users/boss_wt/stdc++.h"
using namespace std;
bool palin(string str)
{
        string temp;
        temp = str;
        reverse(temp.begin(),temp.end());
        if(temp == str)
                return true;
        else return false;
}
void dpalin(string str)
{
        string temp2;
        char temp[1001]="";
        int t=0;
        int len = str.length();
        if(palin(str))
        {
                if(len%2 == 0)
                {
                        for(int i=0; i<len/2; i++)
                                temp[i] = str[i];
                        if(palin(string(temp)))
                        {
                                for(int i=len/2; i<len; i++)
                                {
                                        temp[t] = str[i];
                                        t++;
                                }
                                if(palin(string(temp)))
                                        cout<<"Double Palindrome";
                                else cout<<"Palindrome";
                        }
                        else cout<<"Palindrome";
                }
                else
                {

                        for(int i=0; i<len/2; i++)
                                temp[i] = str[i];
                        if(palin(string(temp)))
                        {
                                for(int i=len/2+1; i<len; i++)
                                {
                                        temp[t] = str[i];
                                        t++;
                                }
                                if(palin(string(temp)))
                                        cout<<"Double Palindrome";
                                else cout<<"Palindrome";
                        }
                        else cout<<"Palindrome";
                }
        }
        else
                cout<<"No";
}
int main()
{
        string str;
        cin>>str;
        transform(str.begin(),str.end(),str.begin(),::tolower);
        dpalin(str);
}
