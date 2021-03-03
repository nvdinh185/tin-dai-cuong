#include<stdio.h>

main()
{
	int i, j;
	int n, m;
	printf("Nhap m = ");
	scanf("%d", &m);
	printf("Nhap n = ");
	scanf("%d", &n);
	for(i=1; i<=m; i++)
	{
		for(j=1; j<=n; j++){
			printf("%3d", 0);
		}
		printf("\n");
	}
}
