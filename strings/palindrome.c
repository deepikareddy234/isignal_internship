/*determine if the given string is a palindrome (or) not*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,len,flag=1;
    printf("Enter a string:");
    scanf("%s",str);
    len=strlen(str);
    for(i=0;i<len/2;i++)
    {
        if(str[i]!=str[len-1-i])
        {
            flag=0;
            break;
        }
    }
    if(flag)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}

