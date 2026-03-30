*Remove Spaces from a given string and store in a new strng*/
#include<stdio.h>
int main()
{
    char str[200],newstr[200];
    int i=0,j=0;
    printf("Enter a string:");
    fgets(str,200,stdin);
    while(str[i]!='\0')
    {
        if(str[i]!=' ' && str[i]!='\n')
        {
            newstr[j]=str[i];
            j++;
        }
        i++;
    }
    newstr[j]='\0';
    printf("String without spaces:%s",newstr);
    return 0;
}

