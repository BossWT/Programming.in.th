#include <iostream>
using namespace std;
int m,n,cmd,score;
char map[6][6];
int row,col,change=0;
void print()
{
        for(int i=0; i<m; i++)
        {
                for(int j=0; j<n; j++)
                        cout<<map[i][j]<<" ";
                cout<<endl;
        }
}
int check(int r,int c)
{
        bool change  = false;
        char temp = map[r][c];
        if(map[r-1][c] == temp)
        {
                cout<<"Above"<<endl;
                score += 5;
                map[r-1][c] = '-';
                map[r][c] = '-';
                change = true;
        }
        if(map[r][c+1] == temp)
        {
                cout<<"Right"<<endl;
                score +=5;
                map[r][c] = '-';
                map[r][c+1] = '-';
                change = true;
        }
        if(map[r+1][c] == temp)
        {
                cout<<"Below"<<endl;
                score+=5;
                map[r][c] = '-';
                map[r+1][c] = '-';
                change = true;
        }
        if(map[r][c-1] == temp)
        {
                cout<<"Left"<<endl;
                score+=5;
                map[r][c] = '-';
                map[r][c-1] = '-';
                change = true;
        }
        if(change)
        {
                score +=5;
                return 1;
        }
        else return 0;
}
int fall()
{
        for(int i=0; i<m; i++)
        {
                for(int j=0; j<n; j++)
                {
                        if(map[i][j] != '-' && map[i][j] != '#' && map[i+1][j] == '-')
                        {
                                int r=i,c=j;
                                while(map[r+1][c] == '-' && r<m)
                                {
                                        map[r+1][c] = map[r][c];
                                        map[r][c] = '-';
                                        r++;
                                }
                                cout<<endl<<"Before Check : "<<endl;
                                print();
                                check(r,c);
                                cout<<"After Check : "<<endl;
                                print();
                                cout<<score<<endl;
                                return 1;
                        }
                }
        }
        return 0;
}
int moveleft(int r,int c)
{
        int change =0;
        map[r][c-1] = map[r][c];
        map[r][c] = '-';
        c=c-1;
        while(map[r+1][c] == '-')
        {
                map[r+1][c] = map[r][c];
                map[r][c] = '-';
                r++;
        }
        cout<<r<<" "<<c<<endl;
        print();
        cout<<"Move Left : ";
        change = check(r,c);
        cout<<score<<endl;
        cout<<"----------------"<<endl;
        row = r;
        col = c;
        return change;

}
int moveright(int r,int c)
{
        int change = 0;
        map[r][c+1] = map[r][c];
        map[r][c] = '-';
        c=c+1;
        while(map[r+1][c] == '-')
        {
                map[r+1][c] = map[r][c];
                map[r][c] = '-';
                r++;
        }
        cout<<r<<" "<<c<<endl;
        print();
        cout<<"Move Right : ";
        change = check(r,c);
        cout<<score<<endl;
        cout<<"----------------"<<endl;
        row = r;
        col = c;
        return change;
}
int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cin>>m>>n;
        for(int i=0; i<m; i++)
                for(int j=0; j<n; j++)
                        cin>>map[i][j];
        cin>>cmd;
        for(int i=0; i<cmd; i++)
        {
                char dir;
                cin>>row>>col>>dir;
                if(map[row][col] == '-' || map[row][col] == '#')
                {
                        score-=5;
                        continue;
                }
                if(dir == 'L')
                {
                        if(map[row][col-1] == '#' || col-1 < 0)
                                score-=5;
                        else
                        {
                                change= moveleft(row,col);
                                print();
                                while(change)
                                        change = fall();
                        }
                }
                else
                {
                        if(map[row][col+1] == '#' || col+1  >= n)
                                score-=5;
                        else
                        {
                                change = moveright(row,col);
                                print();
                                while(change)
                                        change = fall();
                        }
                }
                cout<<endl<<"Break Command "<<i<<" : "<<endl;
                print();
                cout<<score<<endl;
        }
        cout<<endl<<endl<<"Result : "<<endl;
        cout<<score<<endl;
        print();
}
