//Dao mang
#include <stdio.h>
#define MAX 10
void nhapMang(int a[], int n){
	for( int i=0; i<n; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}
void xuatMang(int a[], int n){
	for(int i=0;i<n;i++){
		printf("%5d ",a[i]);
	}
}
void daoMang(int a[], int n){
	for(int i=0;i<=n/2;i++){
		int tam = a[i];
		a[i] = a[n-i-1];
		a[n-i-1] = tam;
	}
}
int main() {
	int a[MAX];
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);
	nhapMang(a, n);
	printf("Mang nhap vao:");
	xuatMang(a, n);
	printf("\n\nMang sau khi dao:");
	daoMang(a, n);
	xuatMang(a, n);
}
