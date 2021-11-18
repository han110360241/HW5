#include<stdio.h>
#include<stdlib.h>


int pow(int a,int b );

int main(void)
{
	int o,t, Sum;
	
	Sum=pow(3, 4);

	printf("%d", Sum);

	
	system("pause");
	return 0;
}
int pow(int a, int b)
{
	int i, total = 1;
	for (i = 1; i <= b; i++)
	{
		total = total*a;
	}
			
	return total;
}

