/*
	Thuât toan: Tim gia tri lon nhat trong 5 so nhap vao
	a, b, c, d, e, max = a
	B1: Nhap 5 so a, b, c, d, e
	B2: Gan max = a
	B3: so sanh max voi b, neu max < b thi max = b
	B4: Tiêp tuc so sanh max voi cac so con lai, tuong tu nhu buoc 3
	B5: In ket qua max ra man hinh
*/
#include <stdio.h>

int main()
{
	int a, b, c, d, e, max;
	printf("Nhap a = ");
	scanf("%d", &a);
	printf("Nhap b = ");
	scanf("%d", &b);
	printf("Nhap c = ");
	scanf("%d", &c);
	printf("Nhap d = ");
	scanf("%d", &d);
	printf("Nhap e = ");
	scanf("%d", &e);
	max = a;
	if(max<b) max = b;
	if(max<c) max = c;
	if(max<d) max = d;
	if(max<e) max = e;
	printf("Gia tri lon nhat la %d", max);
}
