#include<stdio.h>
#include<math.h>

int main()
{
	int n, i;
	float sum;
	printf("Nhap n = ");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		sum+=pow(-1,i+1)/i;
	}
	printf("%.2f",sum);
}
