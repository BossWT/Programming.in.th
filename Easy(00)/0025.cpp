#include <iostream>
using namespace std;
int main()
{
        int la,lb,digits,temp,big;
        string a,b,r;
        char o;
        cin>>a>>o>>b;
        la = a.length();
        lb = b.length();
        if(o == '*')
        {
                digits = la-1+lb-1;
                cout<<"1";
                for(int i=0; i<digits; i++)
                        cout<<"0";
        }
        else
        {

                int temp;
                if(lb>la)
                {
                        temp=lb;
                        lb=la;
                        la=temp;
                }
                if(la == lb)
                {
                        cout<<"2";
                        for(int i=0; i<la-1; i++)
                                cout<<"0";
                }
                else
                {
                        cout<<"1";
                        for(int i=0; i<la-lb-1; i++)
                                cout<<"0";
                        cout<<"1";
                        for(int i=0; i<lb-1; i++)
                                cout<<"0";
                }
        }
}
