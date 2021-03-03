#include<stdio.h>

int tinhtong(int a, int b){
	int sum;
	sum = a + b;
	return sum;
}

int main()
{
	int a, b, sum;
	printf ("Nhap a = ");
	scanf ("%d", &a);
	printf ("Nhap b = ");
	scanf ("%d", &b);
	sum = tinhtong(a, b);
	printf ("Ket qua %d + %d = %d", a, b, sum);
}
