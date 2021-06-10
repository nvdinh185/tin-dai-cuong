#include<stdio.h>
#include<math.h>

main()
{
	int i, j, n, sum;
	printf("Nhap n = ");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		sum = 0;
		for(j=1; j<i; j++)
		{
			if(i%j==0) sum += j;
		}
		if(sum==j) printf("%4d", j);
	}
	
}
