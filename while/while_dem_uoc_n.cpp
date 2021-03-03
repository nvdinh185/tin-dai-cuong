#include<stdio.h>

main()
{
	int n, dem = 0, i = 1;
	printf("Nhap n = ");
	scanf("%d", &n);
	while(i<=n)
	{
		if(n%i==0) dem++;
		i++;
	}
	printf("%d\n", dem);
}
