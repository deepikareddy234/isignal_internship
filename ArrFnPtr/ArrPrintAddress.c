/*scan array elements from the user and print addresses*/
#include <stdio.h>
void printAddresses(int *p,int n);
int main()
{
    int a[100],n,i;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printAddresses(a,n);
    return 0;
}
void printAddresses(int *p,int n)
{
    int i;
    printf("Addresses of elements are:\n");
    for(i=0;i<n;i++)
        printf("%p\n",(p+i));
}

