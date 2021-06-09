#include<stdio.h>
#include<math.h>

int main(){
	int k = 0;
	float a, pi, bieuThucTong = 0;
	printf("Nhap a = ");
	scanf("%f", &a);
	float bieuThuc = (float)1/(2*k+1);
	while(bieuThuc>=a){
		bieuThucTong += (pow(-1, k))*((float)1/(2*k + 1));
		k++;
		bieuThuc = (float)1/(2*k+1);
	}
	pi = 4*bieuThucTong;
	printf("PI = %f\n", pi);
	printf("PI in math.h = %f", M_PI);
}

