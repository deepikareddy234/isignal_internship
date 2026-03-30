/*Library Management*/
#include<stdio.h>
struct Book
{
    char title[30];
    char author[30];
    float price;
};
int main()
{
    struct Book b[3];
    int i,max=0,min=0;
    for(i=0;i<3;i++)
    {
        printf("Enter details of book %d\n",i+1);
        printf("Title:");
        scanf("%s",b[i].title);
        printf("Author:");
        scanf("%s",b[i].author);
        printf("Price:");
        scanf("%f",&b[i].price);
    }
    for(i=1;i<3;i++)
    {
        if(b[i].price>b[max].price)
        {
            max=i;
        }
        if(b[i].price<b[min].price)
        {
            min=i;
        }
    }
    printf("Most expensive book\n");
    printf("Title:%s Author:%s Price:%.2f\n",b[max].title,b[max].author,b[max].price);
    printf("Lowest priced book\n");
    printf("Title:%s Author:%s Price:%.2f\n",b[min].title,b[min].author,b[min].price);
    return 0;
}

