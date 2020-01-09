#include <stdio.h>
#include <math.h>
int main(){

        short q;
        int n;
        long double result;

        scanf("%hu",&q);
        int i;
        for(i=0; i<q; i++) {
                scanf("%d",&n);
                result = pow(2,n);
                printf("%.0Lf\n",result);
        }

}
