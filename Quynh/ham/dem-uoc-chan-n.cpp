#include<stdio.h>

int main()
{
	int n,i,dem=0;
	printf("Nhap n = ");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		if(n%i==0&&i%2==0)
		dem++;
	}
	printf("%d",dem);
}
