/* Q43: Check whether a number is strong. */

#include <stdio.h>
int main() {
    int n,temp,sum=0;
    scanf("%d",&n);
    temp=n;
    while(temp!=0){
        int d=temp%10, f=1;
        for(int i=1;i<=d;i++) f*=i;
        sum+=f;
        temp/=10;
    }
    if(sum==n) printf("Strong number");
    else printf("Not strong number");
    return 0;
}
