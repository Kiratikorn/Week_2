#include<stdio.h>
int main()
{
	int x, y;
	scanf_s("%d %d", &x, &y);
	if (y % x == 0)
	{
		printf("%d", y / x);
	}
	else
	{
		printf("%d", y / x + 1);
	}
	return 0;
}