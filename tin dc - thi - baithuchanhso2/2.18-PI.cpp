// so pi 
#include <stdio.h>
#include <math.h>
int main() {
	float a;
	printf("Nhap a:");
	scanf("%f",&a);
	int k=0;
	float s=0;
	while ( 1.0/(2*k+1) >= a ) { 
		s += pow(-1,k) * 1.0/(2*k+1);
		k++;
	} 
	float pi = 4*s;
	printf("Gia tri cua pi la: %0.8f",pi);
	return 0;
}
