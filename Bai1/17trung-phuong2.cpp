#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	float a, b, c, t1, t2, x1, x2, x3, x4, delta;
	printf("Nhap cac he so a, b, c: ");
	scanf("%f%f%f", &a, &b, &c);
	delta = b*b-4*a*c;
	if(delta<0) printf("Phuong trinh vo nghiem!");
	else if(delta==0){
		t1 = -b/(2*a);
		if(t1<0) printf("Phuong trinh vo nghiem!");
		else{
			x1 = sqrt(t1);
			x2 = -sqrt(t1);
			printf("Phuong trinh co 2 nghiem: x1 = %4.2f, x2 = %4.2f", x1, x2);
		}
	}else{
		t1 = (-b+sqrt(delta))/(2*a);
		t2 = (-b-sqrt(delta))/(2*a);
		if(t1<0&&t2<0) printf("Phuong trinh vo nghiem!");
		else if(t1<0){
			x1 = sqrt(t2);
			x2 = -sqrt(t2);
			printf("Phuong trinh co 2 nghiem: x1 = %4.2f, x2 = %4.2f", x1, x2);
		}else if(t2<0){
			x1 = sqrt(t1);
			x2 = -sqrt(t1);
			printf("Phuong trinh co 2 nghiem: x1 = %4.2f, x2 = %4.2f", x1, x2);
		}else{
			x1 = sqrt(t1);
			x2 = -sqrt(t1);
			x3 = sqrt(t2);
			x4 = -sqrt(t2);
			printf("Phuong trinh co 4 nghiem: x1 = %4.2f, x2 = %4.2f, x3 = %4.2f, x4 = %4.2f", x1, x2, x3, x4);	
		}
	}
	getch();
}
