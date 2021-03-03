#include<stdio.h>

int main()
{
	int n, dem, i;
	printf("Nhap n = ");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		dem++;
	}
	if(dem==2) printf("%d", n);
}
