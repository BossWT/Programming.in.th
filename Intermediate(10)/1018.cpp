#include <iostream>
using namespace std;
int x,y;
char dir[4] = {'N','E','S','W'};
int face = 1;
int dead = 0;
void turn(string cmd,int dis)
{
        if(cmd == "LT")
                face--;
        else if(cmd == "RT")
                face++;
        else if(cmd == "BW")
                face+=2;
        if(face >= 4)
                face-=4;
        else if(face <= -1)
                face+=4;
        //cout<<dir[face]<<endl;
}
void walk(int dis)
{
        switch(face)
        {
        case 0:
                if(y+dis >=  50000)
                        dead = 1;
                else y+= dis;
                break;
        case 1:
                if(x+dis >= 50000)
                        dead = 1;
                else x+=dis;
                break;
        case 2:
                if(y-dis <= -50000)
                        dead = 1;
                else y-=dis;
                break;
        case 3:
                if(x-dis <= -50000)
                        dead = 1;
                else x-=dis;
                break;
        }
}
int main()
{
        int n,dis;
        string cmd;
        cin>>n;
        for(int i=0; i<n; i++)
        {
                cin>>cmd>>dis;
                turn(cmd,dis);
                walk(dis);
                if(dead == 1)
                        break;
                //cout<<x<<" "<<y<<endl;
        }
        if(dead) cout<<"DEAD";
        else cout<<x<<" "<<y<<endl<<dir[face];
}
