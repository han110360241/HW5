#include<stdio.h>
#include<stdlib.h>

int main()
{
	unsigned long long a[100];
	int i = 2;
	a[0] = 0;
	a[1] = 1;

	printf("%llu,%llu,", a[0], a[1]);
	while (1)
	{
		a[i] = a[i - 1] + a[i - 2];
		printf("%llu,", a[i]);
		if (i>=94)
			break;
		i++;
		
	}
	printf("%d", i);
	




	system("pause");
	return 0;
}