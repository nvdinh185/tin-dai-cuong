#include<stdio.h>

int ktFibo(int n)
{
	int t1 = 1, t2 = 1, next;
	while(t1<n)
	{
	   next = t1 + t2;
	   t1 = t2;
	   t2 = next;
	}
	if(t1==n) return 1;
	return 0;
}
int main()
{
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);
	if(ktFibo(n)) printf("%4d thuoc day so Fibonacci!", n);
	else printf("%4d khong thuoc day so Fibonacci!", n);
}
