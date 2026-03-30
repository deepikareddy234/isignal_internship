#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct car
{
    char cname[10];
    char model[10];
    int year;
    char etype;
    char color[10];
};

int main()
{
    struct car *p;
    p=(struct car*)malloc(sizeof(struct car));
    *p=(struct car){"swift","tata",2024,'p',"red"};
    strcpy(p->cname,"vxi");
    strcpy(p->model,"abc");
    p->year=2026;
    p->etype='d';
    strcpy(p->color,"blue");
    printf("Car Name: %s\n",p->cname);
    printf("Model: %s\n",p->model);
    printf("Year: %d\n",p->year);
    printf("Type: %c\n",p->etype);
    printf("Color: %s\n",p->color);
    free(p);
    return 0;
}

