#include<stdio.h>

int main()
{
	int n, sogoc, sodao = 0, donvi;
	printf("Nhap n = ");
	scanf("%d", &n);
	sogoc = n;
	while(sogoc>0)
	{
		donvi = sogoc%10;
		sodao = sodao*10 + donvi;
		sogoc = sogoc/10;		
	}
	if(n==sodao) printf("%d la so doi xung!", n);
	else printf("%d khong la so doi xung!", n);
}
