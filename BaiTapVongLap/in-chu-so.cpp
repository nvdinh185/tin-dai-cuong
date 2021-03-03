/*
	Thuat toan: Nhap vao mot so nguyen duong n, in ra cac chu so trong n
	n = 123
	B1: Nhap n;
	B2: Kiem tra dieu kien, trong khi n > 0 thuc hien
	B3: donvi = n%10;
	B4: In ra donvi
	B5: Tinh n = n/10;
	B6: Quay lai buoc 2
	B7: Ket thuc chuong trinh
*/
#include<stdio.h>

int main()
{
	int n, donvi;
	printf("Nhap n = ");
	scanf("%d", &n);
	while(n>0){
		donvi = n%10;
		printf("%4d", donvi);
		n = n/10;
	}
}
