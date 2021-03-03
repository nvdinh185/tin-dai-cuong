#include<stdio.h>

void hoandoi(int &a, int &b)
{
	int hoandoi = a;
	a = b;
	b = hoandoi;
}

int main()
{
	int a,b;
	printf("Nhap a = ");//4
	scanf("%d", &a);
	printf("Nhap b = ");//5
	scanf("%d", &b);
//	printf("Truoc khi hoan doi a = %d, b = %d\n", a, b);//4 5
	hoandoi(a, b);
	printf("Sau khi hoan doi a = %d, b = %d", a, b);//5 4
}
