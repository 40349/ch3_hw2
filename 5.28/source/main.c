#include<stdio.h>
#include<stdlib.h>
int a(int);
int main(void)
{
	char x,ans;
	printf("input a alphabet:");
	scanf_s("%c", &x);
	printf("the alphabet you input is %c\n", a(x));
	system("pause");
	return 0;
}
int a(int a)
{
	return a;
}