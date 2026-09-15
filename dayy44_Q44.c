/* Q44: Sum series 1 + 3/4 + 5/6 + 7/8 + ... */

#include <stdio.h>
int main() {
    int n; double sum=0;
    scanf("%d",&n);
    if(n>=1) sum=1.0;
    for(int i=2;i<=n;i++){
        double num=2*i-1;
        double den=2*i;
        sum += num/den;
    }
    printf("Approximate sum: %.2f",sum);
    return 0;
}
