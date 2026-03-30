#include<stdio.h>
int main(){
int a=10;
char b='A';
float c=1.5;
double d=2.34;
signed int e=-20;
unsigned int f=20;
short int g=5;
long int h=100000;
long long int i=123456789;
signed char j='B';
unsigned char k='C';
long double l=3.14159;

printf("int = %d\n",a);
printf("char = %c\n",b);
printf("float = %f\n",c);
printf("double = %lf\n",d);
printf("signed int = %d\n",e);
printf("unsigned int = %u\n",f);
printf("short int = %d\n",g);
printf("long int = %ld\n",h);
printf("long long int = %lld\n",i);
printf("signed char = %c\n",j);
printf("unsigned char = %c\n",k);
printf("long double = %Lf\n",l);

return 0;
}

