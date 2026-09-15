/* Q16: Find the largest among three numbers. */

#include <stdio.h>
int main() {
    int a, b, c, max;
    scanf("%d %d %d", &a, &b, &c);
    if (a>=b && a>=c) max=a;
    else if (b>=a && b>=c) max=b;
    else max=c;
    printf("Largest is %d", max);
    return 0;
}
