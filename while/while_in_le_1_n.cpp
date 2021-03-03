#include<stdio.h>

main()
{
	int n, i = 1;
	printf("Nhap n = ");
	scanf("%d", &n);
	while(i<=n)
	{
		if(i%2==1) printf("%d\n", i);
		i++;
	}
}
