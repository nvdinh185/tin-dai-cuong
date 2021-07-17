//So chinh phuong
#include <stdio.h>
#include <math.h>
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
int soCP (int x){
	if( ((int)sqrt(x) * (int)sqrt(x))== x ) return 1;
	return 0;
}
void xuatCP(int a[], int n){
	for(int i=0;i<n;i++){
		if(soCP(a[i])) printf("%5d ",a[i]);
	}
}
int tongCP(int a[], int n){
	int sum = 0;
	for(int i=0;i<n;i++){
		if(soCP(a[i])) sum += a[i];
	}
	return sum;
}
int main() {
	int n;
	int a[MAX];
	printf("Nhap n = ");
	scanf("%d", &n);
	nhapMang(a, n);
	printf("Mang vua nhap la: ");
	xuatMang(a, n);
	printf("\n\nCac so chinh phuong trong mang la: ");
	xuatCP(a, n);
	printf("\n\nTong cac so chinh phuong trong mang la: %d", tongCP(a,n));
}
