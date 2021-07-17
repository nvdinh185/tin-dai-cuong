#include<stdio.h>
#include<math.h>

int main(){
	int k = 0;
	float a, pi, sum = 0;
	printf("Nhap a = ");
	scanf("%f", &a);
	while((float)1/(2*k+1)>=a){
		sum += (pow(-1, k))*((float)1/(2*k + 1));
		k++;		
	}
	pi = 4*sum;
	printf("PI = %f\n", pi);
	printf("PI in math.h = %f", M_PI);
}

