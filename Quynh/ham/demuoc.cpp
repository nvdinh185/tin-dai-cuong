#include<stdio.h>

int demuoc(int n)
{
	int i, j, dem=0;
	for(i=1; i<=n; i++)
	{
		dem=0;
		for(j=1; j<=i; j++)
		{
			if(i%j==0)
			dem++;
		}
	if(dem>=3) return 1;
	return 0;
	}
}
	
int main()
{
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);
	if(demuoc(n)==1) printf("%d", n);
	else printf("khong dung");
}


