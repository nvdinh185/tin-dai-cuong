#include<stdio.h>

int main()
{
	int n, tich=1,i;
	printf("Nhap n = ");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		tich=tich*i;
	}
	printf("%d", tich);
}
