#include <iostream>
#include <queue>
using namespace std;
int main()
{
        int n,val;
        char cmd;
        priority_queue<int>pq;
        cin>>n;
        for(int i=0; i<n; i++)
        {
                getchar();
                scanf("%c",&cmd);
                if(cmd == 'P')
                {
                        scanf("%d",&val);
                        pq.push(val);
                }
                else
                {
                        if(pq.empty())
                                printf("-1\n");
                        else
                        {
                                printf("%d\n",pq.top());
                                pq.pop();
                        }
                }
        }
}
