#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{
	float R, V, S;
	printf("Nhap ban kinh R = ");
	scanf("%f", &R);
	V = (4*M_PI*pow(R, 3))/3;
	S = 4*M_PI*R*R;
	printf("The tich hinh cau la: %4.2f\n", V);
	printf("Dien tich hinh cau la: %4.2f", S);
	getch();
}
