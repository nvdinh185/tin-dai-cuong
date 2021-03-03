#include<stdio.h>
#include<math.h>

main()
{
	int i, n, sum = 0;
	printf("Nhap n = ");
	scanf("%d", &n);
	for(i=1; i<n; i++)
	{
		if(n%i==0) sum += i;
	}
	if(sum==n) printf("%d la so hoan hao!", n);
	else printf("%d khong la so hoan hao!", n);
}
