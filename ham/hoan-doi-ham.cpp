#include<stdio.h>

void hoandoi(int &a, int &b){
	int tam;
	tam = a;
	a = b;
	b = tam;
}

int main()
{
	int a, b;
	printf ("Nhap a = ");
	scanf ("%d", &a);
	printf ("Nhap b = ");
	scanf ("%d", &b);
	printf ("Truoc khi hoan doi a = %d, b = %d\n", a, b);
	hoandoi(a, b);
	printf ("Sau khi hoan doi a = %d, b = %d", a, b);
}
