#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size

int main()
{
	char str1[MAX_SIZE], str2[MAX_SIZE];
	char *s1 = str1;
	char *s2 = str2;

	/* Input two strings from user */
	printf("Enter first string: ");
	scanf("%s", str1);
//gets(str1);
	printf("Enter second string: ");
	scanf("%s", str2);
	//gets(str2);

	/* Move till the end of str1 */
	while(*(++s1));

	/* Copy str2 to str1 */
	while(*(s1++) = *(s2++));

	printf("Concatenated string = %s\n", str1);
				return 0;
}
