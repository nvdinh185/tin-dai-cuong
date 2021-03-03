#include <stdio.h>
#include <conio.h>
#include <math.h>

//Khai bao ham truoc, dinh nghia ham sau ham main
bool nguyenTo(int n);

main(){
	int n, i;
	printf("Nhap n = ");
	scanf("%d", &n);
	printf("Danh sach so nguyen to nho hon hoac bang %d: ", n);
	for(i=2; i<=n; i++){
		if(nguyenTo(i)) printf("%d\t", i);
	}
	getch();
}

bool nguyenTo(int n){
	int j;
	for(j=2; j<=sqrt(n); j++){
		if(n%j==0) return false;
	}
	return true;	
}
