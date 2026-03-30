/*Finding a element*/
#include <stdio.h>
int search(int *p,int n,int key);
int main()
{
    int a[100],n,i,key,pos;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter element to search:");
    scanf("%d",&key);
    pos=search(a,n,key);
    if(pos==-1)
        printf("Element not found");
    else
        printf("Element found at position %d",pos+1);
    return 0;
}
int search(int *p,int n,int key)
{
    int i;
    for(i=0;i<n;i++)
        if(*(p+i)==key)
            return i;
    return -1;
}

