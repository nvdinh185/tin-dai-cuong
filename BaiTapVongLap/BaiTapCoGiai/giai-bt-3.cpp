#include<stdio.h>

int main()
{
	int n, i, giaithua = 1;
	printf("Nhap n = ");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		giaithua *= i;
	}
	printf("Ket qua %d! = %d", n, giaithua);
}
