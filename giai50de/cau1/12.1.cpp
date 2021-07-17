//tinh sin(x):
#include <stdio.h>
#include <math.h>
float gT(int n){
	float gt = 1.0;
	for(int i=1; i<=n; i++){
		gt*=i;
	}
	return gt;
}
double sin(double x){
	float sin,n;
	float tam = pow(x,2*n+1) / gT(2*n+1);
	sin = 0; n = 0;
	while(fabs(tam) >= pow(10.0,-6.0)){
		sin += pow(-1,n)*tam;
		n++;
		tam = pow(x,2*n+1) / gT(2*n+1);
	}
	return sin;
}
int main() {
	float x;
	printf("Nhap x = ");
	scanf("%f", &x);
	printf("Sin(%f) = %0.3f ", x, sin(x));
}
