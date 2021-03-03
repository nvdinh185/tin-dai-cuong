#include <stdio.h>
#include <conio.h>
#include <math.h>

const float esp = pow(10, -6);
long giaiThua(int n){
	if(n<2) return 1;
	else return n*giaiThua(n-1);
}
main(){
	int i=0;
	float x, sinx=0, bieuthuc;
	printf("Nhap x = ");
	scanf("%f", &x);
	do{
		bieuthuc = (float) pow(-1, i)*pow(x, 2*i+1)/giaiThua(2*i+1);
		sinx+=bieuthuc;
		i++;
	}while(fabs(bieuthuc)>esp);
	printf("Ket qua: sin(%f) = %.4f", x, sinx);
	getch();
}
