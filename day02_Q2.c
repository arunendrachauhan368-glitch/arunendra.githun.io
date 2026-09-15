/* Q2: Input two numbers and display sum, difference, product and quotient. */
#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d",
           a + b, a - b, a * b, a / b);

    return 0;
}
