/*Check Uppercase Letter or not in an inputed charecter*/
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
        printf("Uppercase letter");
    else
        printf("Not an uppercase letter");
    return 0;
}

