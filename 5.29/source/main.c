#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int m, n;
	int i = 2;
	int lcm = 1;

	printf("input two integer");
	scanf_s("%d%d", &m, &n);
	if (m == 1 || n == 1)
	{
		lcm = m * n;
	}
	while (m >= i && n >= i)
	{
		while (m % i == 0 && n % i == 0)
		{
			lcm = lcm * i;
			m = m / i;
			n = n / i;
		}
		i++;
	}

	printf("LCM:%d", lcm*m*n);


	system("pause");
	return 0;
}