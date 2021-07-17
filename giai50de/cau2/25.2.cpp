//Xoa gia tri am dau tien cua mang
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
void xoaMang(int a[], int &n){
	for(int i=0; i<n; i++){
		if(a[i] < 0){
			for(int j=i;j<n-1; j++){
				a[j] = a[j+1];
			}
			n--;
			i--;
			break;
		}
	}
}
int main() {
	int n;
	int a[MAX];
	printf("Nhap n = ");
	scanf("%d", &n);
	nhapMang(a, n);
	printf("Mang nhap vao la:");
	xuatMang(a, n);
	xoaMang(a, n);
	printf("\n\nMang sau khi xoa:");
	xuatMang(a, n);
	printf("\n\n");
}
