#include <stdio.h>

int main() {
    int r, c;

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    int a[r][c];
    int aa[r];

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("Enter element: ");
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i < r; i++){
        int sum = 0;

        for(int j = 0; j < c; j++){
            sum = sum + a[i][j];
        }

        aa[i] = sum;
    }

    printf("Row sums are: ");

    for(int i = 0; i < r; i++){
        printf("%d ", aa[i]);
    }

    return 0;
}
