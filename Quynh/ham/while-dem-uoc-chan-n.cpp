#include<stdio.h>

int main()
{
	int n, i = 1, dem = 0;
	printf("Nhap n = ");
	scanf("%d", &n);
	while(i<=n)
	{
		if(n%i==0 && i%2==0)	
		{
			dem++;
		}
		i++;
	}
	printf("%d", dem);
}
