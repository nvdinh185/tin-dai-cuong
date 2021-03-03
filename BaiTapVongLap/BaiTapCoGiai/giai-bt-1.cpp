#include<stdio.h>

int main()
{
	int i, n;
	printf("Nhap n = ");
	scanf("%d", &n);
	for(i=1; i<=10; i++)
	{
		printf("%2d x %2d = %2d\n", n, i, n*i);
	}
}
