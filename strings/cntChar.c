/*Count Alphabets, Digits, Specials*/
#include<stdio.h>
int main()
{
    char str[200];
    int i=0,alpha=0,digit=0,special=0;
    printf("Enter a string:");
    fgets(str,200,stdin);
    while(str[i]!='\0')
    {
        if((str[i]>='A' && str[i]<='Z')||(str[i]>='a' && str[i]<='z'))
            alpha++;
        else if(str[i]>='0' && str[i]<='9')
            digit++;
        else if(str[i]!='\n')
            special++;
        i++;
    }
    printf("Alphabets:%d\nDigits:%d\nSpecial characters:%d",alpha,digit,special);
    return 0;
}

