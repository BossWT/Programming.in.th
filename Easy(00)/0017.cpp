#include <iostream>
#include <algorithm>
//#include <stdlib.h>
using namespace std;
int s[4];
/*
   int compare(const void *a,const void *b)
   {
        return (*(int *)a-*(int *)b);
   }
 */
int main()
{

        for(int i=0; i<4; i++)
                cin>>s[i];
        //qsort(s,4,sizeof(int),compare);
        sort(s,s+4);
        cout<<s[0]*s[2];
}
