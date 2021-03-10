#include<stdio.h>

main()
{
	int n = 20, i;
	for(i=1; i<=n; i++)
	{
		if(n%i==0) printf("%3d\n", i);
	}
	
}
