/* Q41: Swap first and last digit of a number. */

#include <stdio.h>
#include <math.h>
int main() {
    int n,temp,digits=0,first,last,middle,result,p;
    scanf("%d",&n);
    if(n>=0 && n<10){ printf("%d",n); return 0; }
    temp=n;
    while(temp>=10){ temp/=10; digits++; }
    first=temp;
    last=n%10;
    p=(int)pow(10,digits);
    middle=(n%p)/10;
    result=last*p+middle*10+first;
    printf("%d",result);
    return 0;
}
