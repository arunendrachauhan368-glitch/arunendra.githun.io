/* Q66: Insert an element in a sorted array. */

#include <stdio.h>
int main() {
    int n,a[101],x,pos;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&x);
    pos=n;
    for(int i=0;i<n;i++)
        if(x<a[i]){ pos=i; break; }
    for(int i=n;i>pos;i--) a[i]=a[i-1];
    a[pos]=x; n++;
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}
