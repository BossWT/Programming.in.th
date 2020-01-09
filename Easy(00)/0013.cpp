#include <iostream>
using namespace std;
int main()
{
        int data[9],sum=0,flag[9];
        for(int i=0; i<9; i++)
        {
                flag[i] = 0;
        }
        for(int i=0; i<9; i++)
        {
                cin>>data[i];
                sum+=data[i];
        }
        //cout<<sum<<endl;
        for(int i=0; i<9; i++)
        {
                for(int j=i+1; j<9; j++)
                {
                        if(sum - data[i] - data[j] == 100)
                        {
                                flag[i]=1;
                                flag[j]=1;
                        }
                }
        }
        for(int i=0; i<9; i++)
        {
                if(flag[i] == 0)
                {
                        cout<<data[i]<<endl;
                }
        }
}
