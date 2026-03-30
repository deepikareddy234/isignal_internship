/*Count Words in String*/
#include<stdio.h>
int main()
{
    char str[200];
    int i=0,words=0;
    printf("Enter a string:");
    fgets(str,200,stdin);
    while(str[i]!='\0')
    {
        if((i==0 && str[i]!=' ' && str[i]!='\n')||(str[i]!=' ' && str[i-1]==' '))
            words++;
        i++;
    }
    printf("Number of words:%d",words);
    return 0;
}

