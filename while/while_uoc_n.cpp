#include<stdio.h>

main()
{
	int n;
	int i = 1;
	printf("Nhap n = ");
	scanf("%d", &n);
	while(i<=n)
	{
		if(n%i==0) printf("%d\n", i);
		i++;
	}
}
