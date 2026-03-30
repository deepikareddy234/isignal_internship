/*find Maximum Frequency Character*/
#include<stdio.h>
int main()
{
    char str[200];
    int i,j,count,max=0;
    char ch;
    printf("Enter a string:");
    fgets(str,200,stdin);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='\n')
            continue;
        count=1;
        for(j=i+1;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
                count++;
        }
        if(count>max)
        {
            max=count;
            ch=str[i];
        }
    }
    printf("Maximum frequency character:%c\nFrequency:%d",ch,max);
    return 0;
}

