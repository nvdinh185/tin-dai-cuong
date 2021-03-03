#include<stdio.h>

int main()
{
	int n, i, sodao = 0, donvi;
	printf("Nhap n = ");
	scanf("%d", &n);
	while(n>0){
		donvi = n%10;
		sodao = sodao*10 + donvi;
		n /= 10;
	}
	printf("So dao la %d", sodao);
}
