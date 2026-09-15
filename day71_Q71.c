// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int r,c;
    printf("Enter number of rows\n");
    scanf("%d",&r);
    printf("Enter number of colunms\n");
    scanf("%d",&c);
     int a[r][c];
    for(int i=0;i<r;i++){
        for(int  j=0;j<c;j++){
            printf("Enter Elements\n");
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int  j=0;j<c;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }


    return 0;
}
