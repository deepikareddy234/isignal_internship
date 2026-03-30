/*assign array's to pointer and print individual address using pointer notation*/
#include <stdio.h>
void printAddresses(int *p,int n);
int main()
{
    int a[100],n,i;
    int *p;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    p=a;
    printAddresses(p,n);
    return 0;
}
void printAddresses(int *p,int n)
{
    int i;
    printf("Addresses of elements:\n");
    for(i=0;i<n;i++)
        printf("%p\n",(p+i));
}

