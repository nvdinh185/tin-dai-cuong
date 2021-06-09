#include<stdio.h>
#include<math.h>

long long giaiThua(int n){
	if(n==0 || n==1)
	return 1;
	else return n*giaiThua(n-1);	
}

int main(){
	int k = 0;
	float x, delta, sinx = 0;
	printf("Nhap x = ");
	scanf("%f", &x);
	printf("Nhap delta = ");
	scanf("%f", &delta);
	float bieuthuc = (pow(x, (2*k+1)))/giaiThua(2*k+1);
	while(bieuthuc>=delta){
		sinx += (pow(-1, k))*bieuthuc;
		k++;
		bieuthuc = (pow(x, (2*k+1)))/giaiThua(2*k+1);
	}
	printf("sinx = %f\n", sinx);
	printf("sinx in math.h = %f", sin(x));
}

