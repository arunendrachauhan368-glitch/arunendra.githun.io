/* Q39: Find product of odd digits. */

#include <stdio.h>
int main() {
    int n,p=1;
    scanf("%d",&n);
    if(n<0) n=-n;
    while(n!=0){
        int d=n%10;
        if(d%2!=0) p*=d;
        n/=10;
    }
    printf("%d",p);
    return 0;
}
