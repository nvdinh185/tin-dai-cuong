#include <stdio.h>

void nhapMang(int a[], int n){
	int i;
	for(i=0; i<n; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}	
}

void xuatMang(int a[], int n){
	int i;
	for(i=0; i<n; i++){
		printf("%5d", a[i]);
	}
}

void xoaPhanTu(int a[], int n, int a){
	for(i=0; i<n; i++){
		printf("%5d", a[i]);
	}
}

main(){
	int a[100];
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);
	nhapMang(a, n);
	xuatMang(a, n);
}
