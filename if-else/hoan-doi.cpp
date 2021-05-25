#include<stdio.h>

int main()
{
	int a, b;
	printf ("Nhap a = ");
	scanf ("%d", &a);
	printf ("Nhap b = ");
	scanf ("%d", &b);
	printf ("Truoc khi hoan doi a = %d, b = %d\n", a, b);
	int temp = a;
	a = b;
	b = temp;
	printf ("Sau khi hoan doi a = %d, b = %d", a, b);
}
