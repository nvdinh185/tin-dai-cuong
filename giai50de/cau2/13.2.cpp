//Xoa phan tu dau tien cua mang
#include <stdio.h>
#define MAX 100
void nhapMang(int a[], int n){
	for( int i=0; i<n; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}
void xuatMang(int a[], int n){
	for(int i=0;i<n;i++){
		printf("%5d",a[i]);
	}
}
void xoaDau(int a[], int &n){
	for(int i=0; i<n-1; i++){
		a[i] = a[i+1];
	}
	n--;
}
int main() {
	int n;
	int a[MAX];
	do{
		printf("Nhap n = ");
		scanf("%d", &n);
	}while (n<5);
	nhapMang(a, n);
	printf("Mang nhap vao la:");
	xuatMang(a, n);
	xoaDau(a, n);
	printf("\n\nMang sau khi xoa:");
	xuatMang(a, n);
}
