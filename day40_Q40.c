/* Q40: Find 1's complement of a binary number. */

#include <stdio.h>
int main() {
    char ch;
    while(scanf("%c",&ch)==1 && ch!='\n'){
        if(ch=='0') printf("1");
        else if(ch=='1') printf("0");
    }
    return 0;
}
