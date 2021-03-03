#include<stdio.h>

int UCLN(int a, int b){
	while(a!=b){
		if(a>b) a -= b;
		else b -= a;
	}
	return a;
}

int BCNN(int a, int b){
	return a*b/UCLN(a, b);
}

int main(){
	int x, y, z, uoc, boi;
	printf("Nhap x = ");
	scanf("%d", &x);
	printf("Nhap y = ");
	scanf("%d", &y);
	printf("Nhap z = ");
	scanf("%d", &z);
	uoc = UCLN(x, y);
	uoc = UCLN(uoc, z);
	boi = BCNN(x, y);
	boi = BCNN(boi, z);
	printf("UCLN %d\n", uoc);
	printf("BCNN %d", boi);
}
