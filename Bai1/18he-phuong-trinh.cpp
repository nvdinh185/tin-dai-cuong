#include <stdio.h>
#include <conio.h>

main()
{
	float a1,b1,c1,a2,b2,c2,D,Dx,Dy,x,y;
	printf("Nhap cac he so cua phuong trinh thu nhat: a1, b1, c1: ");
	scanf("%f%f%f", &a1, &b1, &c1);
	printf("Nhap cac he so cua phuong trinh thu hai: a2, b2, c2: ");
	scanf("%f%f%f", &a2, &b2, &c2);
	
	D = a1*b2 - a2*b1;
	Dx = c1*b2 - c2*b1;
	Dy = a1*c2 - a2*c1;
	
	if(D==0){
		if(Dx==Dy) printf("Phuong trinh vo nghiem!");
		else printf("Phuong trinh vo so nghiem!");
	}else{
		x = Dx/D;
		y = Dy/D;
		printf("Phuong trinh co nghiem duy nhat: ");
		printf("x = %4.2f, y = %4.2f", x, y);
	}
	getch();
}
