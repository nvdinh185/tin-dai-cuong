#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	float ketqua, tu, mau;
	float x;
	printf("Nhap x: ");
	scanf("%f",&x);
	tu = pow(x,2/3) + pow(x,5) + log(pow(x,4)+1);
	mau = pow(x, 2) + M_PI/4;
	ketqua = tu/mau;
	printf("Gia tri cua bieu thuc = %4.2f", ketqua);
	getch();
	return 0;
}

