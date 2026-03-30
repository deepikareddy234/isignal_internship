/*copy one string to another using pointers*/
#include<stdio.h>
int main()
{
    char str1[100],str2[100];
    char *p1,*p2;
    printf("Enter a string:");
    scanf("%s",str1);
    p1=str1;
    p2=str2;
    while(*p1!='\0')
    {
        *p2=*p1;
        p1++;
        p2++;
    }
    *p2='\0';
    printf("Copied string:%s",str2);
    return 0;
}

