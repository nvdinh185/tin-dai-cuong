#include <stdio.h>
#include <conio.h>
#include <math.h>
//Khai bao va dinh nghia ham
bool nguyenTo(int n){
	int j, dem=0;
	for(j=2; j<=sqrt(n); j++){
		if(n%j==0) dem++;
	}
	if(!dem) return true;
	return false;
}
main(){
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);
	if(nguyenTo(n)) printf("%d la so nguyen to!", n);
	else printf("%d khong phai la so nguyen to!", n);
	getch();
}
