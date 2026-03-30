/*Find Vowels and consonents in a string*/
#include<stdio.h>
int main()
{
    char str[100];
    int i,vowels=0,consonants=0;
    printf("Enter a string:");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
        {
            if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||
               str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
                vowels++;
            else
                consonants++;
        }
    }
    printf("Vowels=%d\nConsonants=%d",vowels,consonants);
    return 0;
}

