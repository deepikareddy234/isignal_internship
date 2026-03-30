#include <stdio.h>
int sumArray(int *p,int n);
int main()
{
    int a[100],n,i,sum;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sum=sumArray(a,n);
    printf("Sum of elements=%d",sum);
    return 0;
}
int sumArray(int *p,int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
        sum=sum+*(p+i);
    return sum;
}

