/*student grades in a class room*/
#include<stdio.h>
char grade(int marks);
int main(){
    int marks;
    printf("Enter student marks:\n");
    scanf("%d",&marks);
    printf("Grade=%c",grade(marks));
    return 0;
}
char grade(int marks){
    if(marks>=90)
        return 'A';
    else if(marks>=70)
        return 'B';
    else if(marks>=50)
        return 'C';
    else if(marks>=30)
        return 'D';
    else
        return 'F';
}

