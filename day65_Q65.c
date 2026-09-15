/* Q65: Binary search in a sorted array. */

#include <stdio.h>
int main() {
    int n,a[100],key,left=0,right,mid,index=-1;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&key);
    right=n-1;
    while(left<=right){
        mid=(left+right)/2;
        if(a[mid]==key){ index=mid; break; }
        else if(a[mid]<key) left=mid+1;
        else right=mid-1;
    }
    if(index==-1) printf("-1");
    else printf("Found at index %d",index);
    return 0;
}
