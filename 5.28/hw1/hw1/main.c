#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char ala;

	printf("input a alaphent: ");
	scanf_s("%c", &ala);
	if (ala < 97)
		printf("%c", ala + 32);
	else
		printf("%c", ala - 32);

	system("pause");
	return 0;
}
