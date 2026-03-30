/*Find the first non-repeated character in a string*/
#include<stdio.h>
int main()
{
    char str[100];
    int i,j,count;
    printf("Enter a string:");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        count=0;
        for(j=0;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
                count++;
        }
        if(count==1)
        {
            printf("First non-repeated character:%c",str[i]);
            return 0;
        }
    }
    printf("No non-repeated character found");
    return 0;
}
