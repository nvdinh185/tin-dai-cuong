#include<stdio.h>
int main(){
	float a,b,x;
	printf("Nhap a = ");
	scanf("%f", &a);
	printf("Nhap b = ");
	scanf("%f", &b);
	if(a == 0 && b== 0){
		printf(" Phuong trinh co vo so nghiem :)) ");
	} else if(a == 0 && b != 0){
		printf(" Phuong trinh vo nghiem :((");
	} else {
		x = -b/a;
		printf(" Phuong trinh co nghiem duy nhat x = %0.2f", x);
	}
}
