/*find Sum of two sub arrays in a larger array*/
#include <stdio.h>
void sumSubArrays(int *p,int *r,int n);
int main()
{
    int a[200],r[100],n,i;
    printf("Enter number of elements in each sub array:");
    scanf("%d",&n);
    printf("Enter elements of main array:");
    for(i=0;i<2*n;i++)
        scanf("%d",&a[i]);
    sumSubArrays(a,r,n);
    printf("Sum array:");
    for(i=0;i<n;i++)
        printf(" %d",r[i]);
    return 0;
}
void sumSubArrays(int *p,int *r,int n)
{
    int i;
    for(i=0;i<n;i++)
        *(r+i)=*(p+i)+*(p+i+n);
}

