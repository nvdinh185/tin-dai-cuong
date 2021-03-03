#include<stdio.h>

int main()
{
	int i, n, t1 = 1, t2 = 1, nextTerm;
	printf("Nhap n = ");
	scanf("%d", &n);
	while(t1<n)
	{
	   nextTerm = t1 + t2;
	   t1 = t2;
	   t2 = nextTerm;
	}
	if(t1==n) printf("%4d thuoc day so Fibonacci!", n);
	else printf("%4d khong thuoc day so Fibonacci!", n);
}
