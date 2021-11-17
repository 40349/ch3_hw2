#include<stdio.h>
#include<stdlib.h>
int tower(int,char,char,char);
int main(void)
{
	int n;
	printf("input disk:");
	scanf_s("%d", &n);
	tower(n,'a','b','c');
	//stsyem("pause");
	return 0;
}
int tower(int n, char a, char b, char c) 
{
	if (n == 1) {
		printf("move disk from %c to %c\n", a, c);
	}
	else 
	{
		tower(n - 1, a, c, b);
		tower(1, a, b, c);
		tower(n - 1, b, a, c);
	}
}