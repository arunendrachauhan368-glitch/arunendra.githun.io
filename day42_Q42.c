/* Q42: Check whether a number is perfect. */

#include <stdio.h>
int main() {
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n/2;i++)
        if(n%i==0) sum+=i;
    if(sum==n && n>0) printf("Perfect number");
    else printf("Not perfect number");
    return 0;
}
