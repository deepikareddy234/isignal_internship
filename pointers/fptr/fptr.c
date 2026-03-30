#include <stdio.h>

typedef int (*FPTR)(int, int);
typedef int (*FPTR1)(int, int, int);;


int add1(int a, int b, int k)
{
	return a+b+k;
}

int add(int a, int b)
{
	return a+b;
}

int mul(int a, int b)
{
	return a*b;
}

int main()
{
	//int (*fp)(); // function pointer decleration
	FPTR fp;
	FPTR1 fp1;

	fp = &add;

	int sum = (*fp)(10,20);
	printf("Sum of two numbers %d\n", sum);

	fp = mul;
	int product = fp(10,20);
	printf("Mul of two numbers %d\n", product);

	fp1 = add1;
	int k = (*fp1)(10,20,30);
	printf("Sum of three numbers %d\n", k);
	return 0;
}
