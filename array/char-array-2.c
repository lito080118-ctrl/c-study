#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
int main(void)
{
	int i;
	char fruits[3][20];

	for (i = 0;i < 3;i++)//0~2
	{
		printf("과일 이름을 입력하시오:");
		scanf("%s", fruits[i]);
		printf("%d 번쨰 과일은: %s \n", i, fruits[i]);
	}

	return 0;
}