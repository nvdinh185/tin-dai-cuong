/*
	Thuat toan: Tim gia tri lon nhat cua 3 so
	a, b, c, max = a
	B1: Nhap cac so a, b, c
	B2: Gan max = a
	B3: So sanh max voi b, neu max < b thi gan max = b
	B4: So sanh max voi c, neu max < c thi gan max = c
	B5: In ket qua max ra man hinh
*/
#include<stdio.h>

int main()
{
	int a, b, c, max;
	printf("Nhap a = ");
	scanf("%d", &a);
	printf("Nhap b = ");
	scanf("%d", &b);
	printf("Nhap c = ");
	scanf("%d", &c);
	max = a;
	if(max<b) max = b;
	if(max<c) max = c;
	printf("Gia tri lon nhat la %d", max);
}
