/*even count, odd count using while loop in 1-50 numbers*/
#include<stdio.h>
void evenOdd(int *even,int *odd);
int main(){
    int even=0,odd=0;
    evenOdd(&even,&odd);
    printf("Even count=%d\nOdd count=%d",even,odd);
    return 0;
}
void evenOdd(int *even,int *odd){
    int i=1;
    while(i<=50){
        if(i%2==0)
            (*even)++;
        else
            (*odd)++;
        i++;
    }
}

