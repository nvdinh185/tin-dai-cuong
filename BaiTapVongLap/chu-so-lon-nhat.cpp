/*
	Thuat toan: In ra chu so lon nhat trong so nguyen n nhap tu ban phim
	n = 123
	B1: Nhap n;
	B2: Gan max = 0;
	B3: Kiem tra dieu kien, trong khi n > 0 thuc hien
	B4: donvi = n%10;
	B5: Kiem tra neu max < donvi, thi gan max = donvi
	B6: Tinh n = n/10;
	B7: Quay lai buoc 3
	B8: In gia tri max ra man hinh
*/
#include<stdio.h>

int main()
{
	int n, max=0, donvi;
	printf("Nhap n = ");
	scanf("%d", &n);
	while(n>0){
		donvi = n%10;
		if(max<donvi) max = donvi;
		n = n/10;
	}
	printf("Chu so lon nhat la %d", max);
}
