#include<stdio.h>

main()
{
	int i, j;
	int n=5, m=3;
	int count = 1;
	
	for(i=1; i<=m; i++)
	{
		for(j=1; j<=n; j++){
			printf("%5d", count);
		}		
		printf("\n");
	}
}
