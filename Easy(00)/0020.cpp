#include <iostream>
using namespace std;
int compare(const void *a,const void *b)
{
        return (*(int *)a - *(int *)b);
}
int a,b,c,d;
int score[6],marks[6];
int main()
{
        for(int i=0; i<5; i++)
        {
                cin>>a>>b>>c>>d;
                score[i] = a+b+c+d;
                marks[i] = score[i];
        }
        qsort(score,5,sizeof(int),compare);
        for(int i=0; i<5; i++)
                if(score[4] == marks[i])
                        cout<<i+1<<" "<<score[4];
}
