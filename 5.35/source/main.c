#include<stdio.h>
#include<stdlib.h>
int f(int);
int main(void)
{
	int n;
	printf("fibonacci series\ncalculates Nth,N:");
	scanf_s("%d", &n);
	printf("answer is %d\n", f(n));
	system("pause");
	return 0;
}
int f(int a)
{
	int i,ans_p1,ans_p2,ans;
	ans_p2 = 0;
	ans_p1 = 1;
	if (a > 2)
	{
		for (i = 2; i < a; i++)
		{
			ans = ans_p1 + ans_p2;
			ans_p2 = ans_p1;
			ans_p1 = ans;
		}
		return ans;
	}
	else if (a == 2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}