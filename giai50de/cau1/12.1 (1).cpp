//tinh sin(x):
#include <stdio.h>
#include <math.h>

long long giaiThua(int n){
	if(n==0 || n==1)
	return 1;
	else return n*giaiThua(n-1);	
}

float sinx(float x){
	float sin = 0;
	int i = 0;
	float tam = (pow(x, 2*i+1))/ giaiThua(2*i+1);
	while(fabs(tam) >= pow(10, -6)){
		sin += (pow(-1, i))*tam;		
		i++;
		tam = (pow(x, 2*i+1))/ giaiThua(2*i+1);
	}
	return sin;
}

int main() {
	float x;
	printf("Nhap x = ");
	scanf("%f", &x);
	printf("Sin(%f) = %0.6f\n", x, sinx(x));
	
	// in ra ham sin(x) trong thu vien math.h de so sanh
	printf("sinx in math.h = %f", sin(x));
}
