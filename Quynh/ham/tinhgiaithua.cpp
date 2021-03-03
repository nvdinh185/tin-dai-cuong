#include<stdio.h>

int main()
{
	int i, giaithua, n;
	printf("Nhap n = ");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		giaithua=giaithua*i;
	}
	printf("%d",giaithua);
}
