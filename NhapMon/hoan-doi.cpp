#include<stdio.h>

int main()
{
	int a, b, tam;
	printf("Nhap a = ");
	scanf("%d",&a);
	printf("Nhap b = ");
	scanf("%d",&b);
	printf("Truoc khi hoan doi a = %d, b = %d\n", a, b);
	tam = a;
	a = b;
	b = tam;
	printf("Sau khi hoan doi a = %d, b = %d", a, b);
}
