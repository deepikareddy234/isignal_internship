/*scan array elements from the user and print values of individual*/
#include <stdio.h>
void printElements(int *p,int n);
int main()
{
    int a[100],n,i;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printElements(a,n);
    return 0;
}
void printElements(int *p,int n)
{
    int i;
    printf("Individual elements are:\n");
    for(i=0;i<n;i++)
        printf("%d\n",*(p+i));
}

