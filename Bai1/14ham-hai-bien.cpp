#include <stdio.h>
#include <conio.h>
#include <math.h>

const float e = 2.7182818284590452;
main()
{
	float x, y, g, bieuthuc, mauso, tuso;
	printf("Nhap x, y: ");
	scanf("%f%f", &x, &y);
	bieuthuc = abs(x*x - y) + 5;
	if(bieuthuc<0) printf("Loi mien xac dinh logarit!");
	else{
		mauso = cos(x+y) - sin(x) + 3;
		if(mauso==0) printf("Loi mau so bang 0!");
		else{
			//tuso = pow(e, x+y) + log(bieuthuc);
			tuso = exp(x+y) + log(bieuthuc);
			g = tuso / mauso;
			printf("Gia tri cua ham hai bien la: %4.2f", g);
		}
	}
	getch();
}
