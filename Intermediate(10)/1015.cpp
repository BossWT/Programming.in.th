#include <stdio.h>

int n,count,table[20][20],chk[20][20];

void flush(int i,int j,int &c){

    if(chk[i][j] == 1)  return;

    chk[i][j] = 1;

    c = c + 1;
// printf("I : %d J : %d C : %d\n",i,j,c);
    if(table[i+1][j] == table[i][j] && chk[i+1][j] == 0)    flush(i+1,j,c);

    if(table[i-1][j] == table[i][j] && chk[i-1][j] == 0)    flush(i-1,j,c);

    if(table[i][j+1] == table[i][j] && chk[i][j+1] == 0)    flush(i,j+1,c);

    if(table[i][j-1] == table[i][j] && chk[i][j-1] == 0)    flush(i,j-1,c);

}

void check(int i,int j){

    int same = 0;

    if(chk[i][j] == 1 || table[i][j] == 0)  return;

         if((table[i][j] == table[i+1][j] && table[i][j] == table[i][j+1]) && !chk[i+1][j] && !chk[i][j+1] )       flush(i,j,same);//,printf("1 : %d %d %d\n",i,j,same);

    else if((table[i][j] == table[i-1][j] && table[i][j] == table[i][j-1]) && !chk[i-1][j] && !chk[i][j-1] )       flush(i,j,same);//,printf("2 : %d %d %d\n",i,j,same);

    else if((table[i][j] == table[i+1][j] && table[i][j] == table[i][j-1]) && !chk[i+1][j] && !chk[i][j-1] )       flush(i,j,same);//,printf("3 : %d %d %d\n",i,j,same);

    else if((table[i][j] == table[i-1][j] && table[i][j] == table[i][j+1]) && !chk[i-1][j] && !chk[i][j+1] )       flush(i,j,same);//,printf("4 : %d %d %d\n",i,j,same);

if(same == 3)
{
  // printf("Count : " );
  // printf("%d %d\n",i,j);
    count++;
  }

}

int main(){

    scanf("%d",&n);

    int i,j;

    for(i=1;i<=n;i++)
      for(j=1;j<=n;j++)
          scanf("%d",&table[i][j]);

    for(i=1;i<=n;i++)
      for(j=1;j<=n;j++)
          check(i,j);

    printf("%d",count);

    return 0;

}
