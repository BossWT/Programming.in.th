#include <iostream>
using namespace std;
int row,column,a[21];
char t[21][21];
int main()
{
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cin>>row>>column;
        for(int i=0; i<row; i++)
                for(int j=0; j<column; j++)
                        cin>>t[i][j];
        for(int i=0; i<column; i++)
                cin>>a[i];
        for(int i=0; i<column; i++)
        {
                for(int k=0; k<a[i]; k++)
                {
                        for(int j=0; j<row; j++)
                        {
                                if(t[j][i] == 'O' or t[j][i] == '#')
                                {
                                        t[j-1][i] = '#';
                                        break;
                                }
                                else
                                {
                                        if(j==row-1)
                                                t[j][i] = '#';
                                }
                        }
                }
        }
        for(int i=0; i<row; i++)
        {
                for(int j=0; j<column; j++)
                {
                        cout<<t[i][j];
                }
                cout<<endl;
        }
}
