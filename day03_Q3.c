/* Q3: Calculate area and perimeter of a rectangle. */

#include <stdio.h>
int main() {
    int l, b;
    scanf("%d %d", &l, &b);
    printf("Area=%d, Perimeter=%d", l*b, 2*(l+b));
    return 0;
}
