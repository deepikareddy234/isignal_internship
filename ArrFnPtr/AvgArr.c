/*average*/
#include <stdio.h>
float avgArray(int *p,int n);
int main()
{
    int a[100],n,i;
    float avg;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    avg=avgArray(a,n);
    printf("Average of elements=%.2f",avg);
    return 0;
}
float avgArray(int *p,int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
        sum=sum+*(p+i);
    return (float)sum/n;
}

