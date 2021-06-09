#include<stdio.h>

int main()
{
	int donvi;
	long long n, sogoc, sodao = 0;
	printf("Nhap n = ");
	scanf("%lld", &n);
	sogoc = n;
	while(n>0)
	{
		donvi = n%10;
		sodao = sodao*10 + donvi;
		n = n/10;		
	}
	if(sogoc==sodao) printf("%lld la so doi xung!", sogoc);
	else printf("%lld khong la so doi xung!", sogoc);
}
