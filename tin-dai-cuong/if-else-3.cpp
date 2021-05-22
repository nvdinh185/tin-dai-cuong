#include<stdio.h>
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);
	if(n>5) {
		n += 2;
		printf("gia tri n tang hai don vi n = %d", n);	
	} else {
		n = 0;
		printf("n tra ve gia tri n = %d ", n);
	}
	return 0;
}
