//Cong hai mang
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
void congMang(int a[], int b[], int c[], int n){
	for(int i=0; i<n; i++){
		c[i] = a[i] + b[i];
	}
}
int main() {
	int n;
	int a[MAX], b[MAX], c[MAX];
	printf("Nhap n = ");
	scanf("%d", &n);
	printf("Cac phan tu mang A:\n");
	nhapMang(a, n);
	printf("Cac phan tu mang B:\n");
	nhapMang(b, n);
	printf("\nCac mang vua nhap la:");
	printf("\nA: ");
	xuatMang(a, n);
	printf("\nB: ");
	xuatMang(b, n);
	congMang(a,b,c,n);
	printf("\n\nMang C sau khi cong la: ");
	xuatMang(c, n);
}
