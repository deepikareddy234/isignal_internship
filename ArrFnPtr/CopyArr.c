/*copy an array to another array*/
#include <stdio.h>
void copyArray(int *p,int *q,int n);
int main()
{
    int a[100],b[100],n,i;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    copyArray(a,b,n);
    printf("Copied array:");
    for(i=0;i<n;i++)
        printf(" %d",b[i]);
    return 0;
}
void copyArray(int *p,int *q,int n)
{
    int i;
    for(i=0;i<n;i++)
        *(q+i)=*(p+i);
}

