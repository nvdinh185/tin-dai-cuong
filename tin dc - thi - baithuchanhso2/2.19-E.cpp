// tinh e^x
#include <stdio.h>
#include <math.h>
int main() { 
	float a,x;
	printf("Nhap a,x:");
	scanf("%f%f",&a,&x);
	float kgt = 1;
	int k =0;
	float xm = 1;
	float s = 0;
	float tam = xm / kgt;
	while(fabs(tam) >= a) {
		s = s + tam;
		k++;
		xm = xm * x;
		kgt = kgt * k;
		tam = xm / kgt;
	}
	printf("e^%f = %f",x,s);
	return 0;
}
