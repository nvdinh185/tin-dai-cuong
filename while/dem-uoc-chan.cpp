#include<stdio.h>

main()
{
	int n = 20, dem = 0;
	int i = 1;
	while(i<=n)
	{
		if(n%i==0 && i%2==0) dem++;
		i++;
	}
	printf("%d\n", dem);
}
