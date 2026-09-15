/* Q33: Check whether a number is Armstrong. */

#include <stdio.h>
#include <math.h>
int main() {
    int n,temp,digits=0,sum=0;
    scanf("%d",&n);
    temp=n;
    int x=temp;
    if(x==0) digits=1;
    while(x!=0){ digits++; x/=10; }
    x=temp;
    while(x!=0){ int d=x%10; sum+=(int)pow(d,digits); x/=10; }
    if(sum==n) printf("Armstrong");
    else printf("Not Armstrong");
    return 0;
}
