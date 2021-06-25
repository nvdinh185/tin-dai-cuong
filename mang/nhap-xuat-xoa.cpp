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

void xoaPhanTu(int a[], int n, int x){
	int i;
	for(i=0; i<n; i++){
		if(a[i]==x) break;
	}
	for(int j=i; i<n-1; i++){
		a[j] = a[j+1];
	}
	a[n-1] = 0;
}

main(){
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);
	int a[n];
	nhapMang(a, n);
	xuatMang(a, n);
	int x;
	printf("\n\nNhap phan tu muon xoa: ");
	scanf("%d", &x);
	xoaPhanTu(a, n, x);
	xuatMang(a, n);
}
