#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
char vote[10001];
int survivor = 7;
struct info
{
        int name;
        int score;
        bool live;
} player[7];
bool cmp(info a,info b)
{
        if(a.score == b.score)
                return a.name < b.name;
        return a.score > b.score;
}
int main()
{
        for(int i=0; i<7; i++) player[i].name = i,player[i].score=0,player[i].live=true;
        while(1)
        {
                scanf("%s",vote);
                if(vote[0] == '!')
                        break;
                int len =strlen(vote);
                for(int i=0; i<len; i++)
                {
                        if(player[vote[i]-'A'].live)
                                player[vote[i]-'A'].score++;
                }
                if(survivor > 1)
                {
                        int least = 99999,kill,count=0;
                        for(int i=0; i<7; i++)
                                if(player[i].live)
                                        if(player[i].score < least) least  = player[i].score,kill = i;
                        for(int i=0; i<7; i++)
                                if(player[i].score == least)
                                        count++;
                        if(count == 1)
                        {
                                survivor--;
                                player[kill].live = false;
                        }
                }
        }
        printf("%d\n",survivor);
        sort(player,player+7,cmp);
        for(int i=0; i<7; i++)
                if(player[i].live)
                {
                        if(player[i].score > 30000) player[i].score = 30000;
                        printf("%c %d\n",player[i].name+'A',player[i].score);
                }
}
