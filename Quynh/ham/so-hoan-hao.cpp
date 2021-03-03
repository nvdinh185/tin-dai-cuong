#include<stdio.h>

int main()
{
	int n, i, sum=0;
	printf("Nhap n = ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		sum+=i;
	}
	if(sum==i) printf("n la so hoan hao");
	else printf("n khong la so hoan hao");
}
