#include <iostream>
using namespace std;
int main()
{
        int n;
        float temp;
        cin>>n;
        if(n%2==1)
        {
                for(int i=0; i<n; i++)
                {
                        for(int j=-n/2; j<=n/2; j++)
                        {
                                if(i<=n/2)
                                {
                                        if(i==abs(j))
                                                cout<<"*";
                                        else cout<<'-';
                                }
                                else
                                {
                                        if(abs(i-n+1) == abs(j))
                                                cout<<'*';
                                        else cout<<'-';
                                }

                        }
                        cout<<endl;
                }
        }
        else
        {
                temp = n-1;
                for(int i=0; i<n; i++)
                {
                        for(int j=-temp/2; j<=temp/2; j++)
                        {
                                if(i == temp/2)
                                {
                                        if(i==abs(j))
                                                cout<<"*";
                                        else cout<<'-';
                                }
                                else if(i<temp/2)
                                {
                                        if(i==abs(j))
                                                cout<<"*";
                                        else cout<<'-';
                                }
                                else
                                {
                                        if(abs(i-n+1) == abs(j))
                                                cout<<'*';
                                        else cout<<'-';
                                }

                        }
                        cout<<endl;
                }
        }

}
