/* Q37: Find LCM of two numbers. */

#include <stdio.h>
int main() {
    int a,b,x,y;
    scanf("%d %d",&a,&b);
    x=a; y=b;
    while(y!=0){ int r=x%y; x=y; y=r; }
    printf("%d",(a/x)*b);
    return 0;
}
