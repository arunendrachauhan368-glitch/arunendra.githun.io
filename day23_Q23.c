/* Q23: Calculate library fine based on late days. */

#include <stdio.h>
int main() {
    int d, fine;
    scanf("%d",&d);
    if(d>30) printf("Membership Cancelled");
    else {
        if(d<=5) fine=d*2;
        else if(d<=10) fine=5*2+(d-5)*4;
        else fine=5*2+5*4+(d-10)*6;
        printf("Fine Rs.%d",fine);
    }
    return 0;
}
