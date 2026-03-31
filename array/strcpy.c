#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[10] = "Hello";
	printf("%s\n", a);
	printf("%c\n", a[0]);

	char b[10];
	/*b = "love";
	b[0] = 'l';
	b[1] = 'o';
	b[2] = 'v';
	b[3] = 'e';*/
	strcpy(b, "love");
	printf("%s", b);


	return 0;
}