#include <iostream>
using namespace std;
int main()
{
        int len,r3=0,r11=0,digits=1;
        string num;
        cin>>num;
        len = num.length();
        for(int i=len-1; i>=0; i--)
        {
                r3+=(num[i]-'0')%3;
                if(digits % 2 == 1)
                        r11+=(num[i]-'0')%11;
                else
                        r11+=((num[i]-'0')*10)%11;
                digits++;
        }
        r3%=3;
        r11%=11;
        cout<<r3<<" "<<r11;
}
