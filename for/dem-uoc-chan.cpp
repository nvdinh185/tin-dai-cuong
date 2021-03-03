#include<stdio.h>

main()
{
	int n = 20, dem = 0;
	for(int i=1; i<=20; i++)
	{
		if(n%i==0 && i%2==0) dem++;
	}
	printf("%d\n", dem);
}
