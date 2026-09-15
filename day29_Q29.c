/* Q29: Calculate factorial of a number. */

#include <stdio.h>
int main() {
    int n; unsigned long long f=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) f*=i;
    printf("%llu",f);
    return 0;
}
