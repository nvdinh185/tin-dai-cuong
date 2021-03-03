#include<stdio.h>

int main()
{
	int i = 1, n, dem=0;
	printf("Nhap n = ");
	scanf("%d", &n);
	while(i<=n)
	{
		if(n%i==0)
		{
			dem++;
		}
	i++;
	}
	printf("%d", dem);
	
}

