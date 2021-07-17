//Gia tri nho nhat - vi tri
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
int min(int a[], int n){
	int min = a[0];
	for( int i=0; i<n; i++){
		if( min > a[i]) min = a[i];
	}
	return min;
}
int viTri(int a[], int n){
	int vt = 0;
	for(int i=0; i<n; i++){
		if(min(a,n) == a[i]) vt = i;
	}
	return vt;
}
int main() {
	int a[MAX];
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);
	nhapMang(a, n);
	printf("\nMang vua nhap la:");
	xuatMang(a, n);
	printf("\n\nGia tri nho nhat trong mang la: %5d", min(a, n));
	printf("\n\nDay la phan tu thu %d", viTri(a, n));
}
