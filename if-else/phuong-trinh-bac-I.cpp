#include <stdio.h>
#include <conio.h>
int main()
/*
	Thuat toan:
	B1: Nhap cac he so a, b;
	B2: Xet cac truong hop:
		- Neu a=0, b=0: Phuong trinh vo so nghiem;
		- Neu a=0, b!=0: Phuong trinh vo nghiem;
		- Neu a!=0: Phuong trinh co nghiem duy nhat x = -b/a;
	B3: Xuât ket qua ra man hinh;
*/
{
	int a, b;
	float x;
	printf("Nhap a = ");
	scanf("%d", &a);
	printf("Nhap b = ");
	scanf("%d", &b);
	if(a==0) {
		if(b==0) printf("Phuong trinh vo so nghiem!");
		else printf("Phuong trinh vo nghiem!");
	}else{
		x = (float) -b/a;
		printf("Phuong trinh co nghiem duy nhat x = %f", x);
	}
}
