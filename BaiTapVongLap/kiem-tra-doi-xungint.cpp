#include<stdio.h>

int main()
{
	int donvi;
	int n, sogoc, sodao = 0;
	printf("Nhap n = ");
	scanf("%d", &n);
	sogoc = n;
	while(n>0)
	{
		donvi = n%10;
		sodao = sodao*10 + donvi;
		n = n/10;		
	}
	if(sogoc==sodao) printf("%d la so doi xung!", sogoc);
	else printf("%d khong la so doi xung!", sogoc);
}
