#include<stdio.h>
#include<stdlib.h>
int lcm(int, int);
int main(void)
{
	int a, b;
	printf("input two numbers:");
	scanf_s("%d %d", &a, &b);
	printf("the LCM is %d\n", lcm(a, b));
	system("pause");
	return 0;
}
int lcm(int x, int y)
{
	int i;
	if (x > y)
	{
		i = x;
	}
	else
	{
		i = y;
	}
	while (i > 0)
	{
		if (i%x == 0 && i%y == 0)
		{
			return i;
			break;
		}
		i++;
	}
}