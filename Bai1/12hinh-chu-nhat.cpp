#include <stdio.h>
#include <conio.h>

main()
{
	float L,W,D,C;
	printf("Nhap chieu dai L = ");
	scanf("%f", &L);
	printf("Nhap chieu rong W = ");
	scanf("%f", &W);
	D = L*W;
	C = 2*(L + W);
	printf("Dien tich hinh chu nhat la: %4.2f\n", D);
	printf("Chu vi hinh chu nhat la: %4.2f", C);
	getch();
}
