#include<stdio.h>

void thaydoi(int &a, int &b){
	if(a%2==0) a*=2;
	if(b%2==0) b*=2;
}

int main()
{
	int a, b;
	printf ("Nhap a = ");
	scanf ("%d", &a);
	printf ("Nhap b = ");
	scanf ("%d", &b);
	printf ("Truoc khi thay doi a = %d, b = %d\n", a, b);
	thaydoi(a, b);
	printf ("Sau khi thay doi a = %d, b = %d", a, b);
}
