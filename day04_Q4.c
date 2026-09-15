/* Q4: Calculate area and circumference of a circle. */

#include <stdio.h>
int main() {
    double r;
    scanf("%lf", &r);
    printf("Area=%.2f, Circumference=%.2f", 3.14159*r*r, 2*3.14159*r);
    return 0;
}
