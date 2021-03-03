#include<stdio.h>

int main()
{
	int i, j, dem=0, n;
	printf("Nhap n = ");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		dem=0;
		for(j=1; j<=i; j++)
		{
			if(i%j==0)
			dem++;
		}
	if(dem>=3) printf("%d\n", i);
	}
}
