#include <iostream>
#include <set>
using namespace std;
int t[11][11],n;
int  horizon()
{
        int sum = 0;
        int temp = 0;
        for(int i=0; i<n; i++)
        {
                sum = 0;
                for(int j=0; j<n; j++)
                        sum+=t[j][i];
                if(i==0)
                        temp = sum;
                else
                {
                        if(sum!=temp)
                                return -1;
                }
        }
        //cout<<"Horizon : "<<sum<<endl;
        return sum;
}
int vertical()
{
        int sum=0;
        int temp = 0;
        for(int i=0; i<n; i++)
        {
                sum = 0;
                for(int j=0; j<n; j++)
                        sum+=t[i][j];
                if(i==0)
                        temp = sum;
                else
                {
                        if(sum != temp)
                                return -1;
                }
        }
        //cout<<"Vertical : "<<sum<<endl;
        return sum;
}
int diagonal()
{
        int left = 0;
        int right = 0;
        int i = 0,j=0;
        while(i<n || j<n)
        {
                left+=t[i][j];
                i++;
                j++;
        }
        i=0;
        j=n-1;
        while(i<n || j>=0)
        {
                right+=t[i][j];
                i++;
                j--;
        }
        //cout<<"Left : "<<left<<endl;
        //cout<<"Right : "<<right<<endl;
        if(left == right)
                return left;
        else return -1;
}
bool isrepeat()
{
        set<int> temp;
        for(int i=0; i<n; i++)
                for(int j=0; j<n; j++)
                        temp.insert(t[i][j]);
        if(temp.size() != n*n)
                return true;
        else return false;
}
int main()
{
        cin>>n;
        for(int i=0; i<n; i++)
                for(int j=0; j<n; j++)
                        cin>>t[i][j];
        if(!isrepeat())
                if(horizon() == diagonal() && horizon() == vertical() && diagonal() == vertical())
                        cout<<"Yes";
                else cout<<"No";
        else cout<<"No";
}
