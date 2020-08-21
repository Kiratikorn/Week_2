#include<stdio.h>
int main()
{
	int a;
	int i = 2;
	printf("Enter Numbers :");
	scanf_s("%d", &a);
	while (1)
	{
		while (a % i == 0)
		{
			printf("%d", i);
			a /= i;
			if (i > a)
			{
				return 0;
			}
			printf(" x ");
		}
		i++;
	}
	return 0;
}