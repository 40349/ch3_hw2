#include<stdio.h>
#include<stdlib.h>
int power(int x, int y);
int main(void)
{
	int a, b;
	printf("a^b\ninput a:");
	scanf_s("%d", &a);
	printf("input b:");
	scanf_s("%d", &b);
	printf("%d^%d=%d\n", a, b, power(a, b));
	system("pause");
	return 0;
}
int power(int x, int y)
{
	if (y > 0)
	{
		return power(x, y-1)*x;
	}
	
	else
	{
		return 1;
	}
}