#include <stdio.h>
#include <conio.h>

main()
{
	float a, b, h, s;
	printf("Nhap day tren a = ");
	scanf("%f", &a);
	printf("Nhap day duoi b = ");
	scanf("%f", &b);
	printf("Nhap chieu cao h = ");
	scanf("%f", &h);
	s = ((a+b)*h)/2;
	printf("Dien tich cua hinh thang la: %4.2f", s);
	getch();
}
