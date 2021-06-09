#include<stdio.h>

int main()
{
	int n, t1 = 1, t2 = 1, next;
	printf("Nhap n = ");
	scanf("%d", &n);
	printf("Day Fibonacci: ");
	while(t1<n)
	{
	   printf("%5d", t1);
	   next = t1 + t2;
	   t1 = t2;
	   t2 = next;
	}
}
