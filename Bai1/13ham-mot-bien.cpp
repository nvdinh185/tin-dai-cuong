#include <stdio.h>
#include <conio.h>
#include <math.h>

main()
{
	float x,g,gia_tri_log, mauso, tuso;
	printf("Nhap x = ");
	scanf("%f", &x);
	gia_tri_log = abs(x-3)+2;
	if(gia_tri_log<0) printf("Loi mien xac dinh logarit\n");
	else{
		mauso = pow(atan(x-5), 2) + 1;
		if(mauso == 0) printf("Loi mau so bang 0\n");
		else{
			tuso = pow(x, 3) + log(gia_tri_log)/log(5);
			g = tuso/mauso;
			printf("Gia tri cua ham so la: %4.2f\n", g);
		}
	}
	getch();
}
