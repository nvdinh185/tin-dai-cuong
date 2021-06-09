#include<stdio.h>

int main()
{
	int n, t1 = 1, t2 = 1, nextTerm;
	printf("Nhap n = ");
	scanf("%d", &n);
	printf("Day Fibonacci: ");
	for(; t1<n;)
	{
		printf("%4d", t1);
	   	nextTerm = t1 + t2;
	   	 t1 = t2;
	   	t2 = nextTerm;
	}
}
