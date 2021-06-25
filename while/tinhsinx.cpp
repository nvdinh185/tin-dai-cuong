#include<stdio.h>
#include<math.h>

long long giaiThua(int n){
	if(n==0 || n==1)
	return 1;
	else return n*giaiThua(n-1);	
}

float sinx(float x){
	float delta, sinx = 0;
	delta = pow(10, -6);
	int i = 0;
	float bieuthuc = (pow(x, (2*i+1)))/giaiThua(2*i+1);
	while(bieuthuc>=delta){
		sinx += (pow(-1, i))*bieuthuc;
		i++;
		bieuthuc = (pow(x, (2*i+1)))/giaiThua(2*i+1);
	}
	return sinx;
}

int main(){
	float x;
	printf("Nhap x = ");
	scanf("%f", &x);
	printf("sinx = %f\n", sinx(x));
	// in ra ham sin(x) trong thu vien math.h de so sanh
	printf("sinx in math.h = %f", sin(x));
}

