/*Even Odd Numbers Printing using only one for loop*/
#include <stdio.h>
void oddEven(int *p,int n);
int main()
{
    int a[100],n,i;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    oddEven(a,n);
    return 0;
}
void oddEven(int *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(*(p+i)%2==0)
            printf("Even %d\n",*(p+i));
        else
            printf("Odd %d\n",*(p+i));
    }
}

