/* Q22: Find profit or loss percentage. */

#include <stdio.h>
int main() {
    double cp,sp,p;
    scanf("%lf %lf",&cp,&sp);
    if(sp>cp){ p=(sp-cp)*100/cp; printf("Profit %g%%",p); }
    else if(sp<cp){ p=(cp-sp)*100/cp; printf("Loss %g%%",p); }
    else printf("No Profit No Loss");
    return 0;
}
