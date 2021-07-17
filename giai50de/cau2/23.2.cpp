//Gia tri lon nhat cua mang
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
		printf("%5d", a[i]);
	}
}
int max(int a[], int n){
	int max = a[0];
	for( int i=0; i<n; i++){
		if( max < a[i]) max = a[i];
	}
	return max;
}
int main() {
	int a[MAX];
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);
	nhapMang(a, n);
	printf("\nMang vua nhap la:");
	xuatMang(a, n);
	printf("\n\nGia tri lon nhat trong mang la: %5d", max(a, n));
}
