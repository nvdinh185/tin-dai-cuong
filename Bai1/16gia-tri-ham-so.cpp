#include <stdio.h>
#include <conio.h>
#include <math.h>

main()
{
	float x, y, g, bieuthuc, mauso, tuso;
	printf("Nhap x, y: ");
	scanf("%f%f", &x, &y);
	bieuthuc = x*x - y;
	if(bieuthuc<0) printf("Loi mien xac dinh logarit!");
	else{
		mauso = cos(x+y) - sin(x);
		if(mauso==0) printf("Loi mau so bang 0!");
		else{
			tuso = exp(x+y) - log(bieuthuc);
			g = tuso / mauso;
			printf("Gia tri cua ham hai bien la: %.2f", g);
		}
	}
	getch();
}
