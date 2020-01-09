#include <iostream>
using namespace std;
char a[4][200],b[4][200];
char temp[3][3];
int check()
{
        int c=0;
        for(int i=0; i<3; i++)
                for(int j=0; j<3; j++)
                        if(temp[i][j] == '|' or temp[i][j] == '_')
                                c++;
        if(c == 2)
                return 1;
        else if(c == 4)
                return 4;
        else if(c == 3)
                return 7;
        else if(c==7)
                return 8;
        else if(c == 5)
        {
                if(temp[2][0] == '|')
                        return 2;
                if(temp[1][0] == '|')
                        return 5;
                return 3;
        }
        else
        {
                if(temp[1][2] == '|')
                        return 0;
                if(temp[2][0] == ' ')
                        return 9;
                return 6;
        }
}
int main()
{
        int da,db,start = 0,t=0;
        string na,nb;
        cin>>da>>db;
        getchar();
        for(int i=0; i<3; i++)
                gets(a[i]);
        for(int i=1; i<=da; i++)
        {
                for(int j=0; j<3; j++)
                {
                        for(int k=start; k<i*4-1; k++)
                        {
                                //cout<<"temp "<<j<<" "<<t<<" = "<<a[j][k]<<endl;
                                temp[j][t++] = a[j][k];
                                t%=3;
                        }
                }
                start += 4;
                // for(int m=0; m<3; m++)
                // {
                //         for(int n=0; n<3; n++)
                //         {
                //                 cout<<temp[m][n]<<" ";
                //         }
                //         cout<<endl;
                // }
                //cout<<check()<<endl;
                na+=to_string(check());
                //cout<<na<<endl;
        }
        for(int i=0; i<3; i++)
                gets(b[i]);
        start = 0;
        t=0;
        for(int i=1; i<=db; i++)
        {
                for(int j=0; j<3; j++)
                {
                        for(int k=start; k<i*4-1; k++)
                        {
                                //cout<<"temp "<<j<<" "<<t<<" = "<<b[j][k]<<endl;
                                temp[j][t++] = b[j][k];
                                t%=3;
                        }
                }
                start += 4;
                // for(int m=0; m<3; m++)
                // {
                //         for(int n=0; n<3; n++)
                //         {
                //                 cout<<temp[m][n]<<" ";
                //         }
                //         cout<<endl;
                // }
                // cout<<check()<<endl;
                nb+=to_string(check());
                //cout<<nb<<endl;
        }
        cout<<stoi(na)+stoi(nb);

        // cout<<endl;
        // for(int i=0; i<3; i++)
        // {
        //         for(int j=0; j<da*4-1; j++)
        //                 cout<<a[i][j];
        //         cout<<endl;
        // }
        // cout<<endl;
        // for(int i=0; i<3; i++)
        // {
        //         for(int j=0; j<db*4-1; j++)
        //                 cout<<b[i][j];
        //         cout<<endl;
        // }
        // cout<<endl;
}
