#include <stdio.h>

int main()
{
	//int a[5] = { 1,2,3,4,5};
	char str[6] = "Hello";
	char str1[6] = { 'H','e', 'l', 'l', 'o', '\0'};
	char *ptr = "Hello";
	printf("%s %s %s \n", str, str1, ptr);
	ptr++;
	printf("%s \n", ptr);
	printf("%c \n", *ptr);
	return 0;
}
