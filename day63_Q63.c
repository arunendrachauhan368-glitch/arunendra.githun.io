/* Q63: Merge two arrays. */

#include <stdio.h>
int main() {
    int n,m,a[200];
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&m);
    for(int i=0;i<m;i++) scanf("%d",&a[n+i]);
    for(int i=0;i<n+m;i++) printf("%d ",a[i]);
    return 0;
}
