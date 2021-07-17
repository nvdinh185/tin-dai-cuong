//So nguyen duong le lon nhat
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
int maxSL(int a[], int n){
	int max=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==1 && max<a[i]) max = a[i];
	}
	return max;
}
int main() {
	int n;
	int a[MAX];
	printf("Nhap n = ");
	scanf("%d", &n);
	nhapMang(a, n);
	printf("Mang vua nhap la: ");
	xuatMang(a, n);
	if(maxSL(a,n) ==0) printf("\n\nKhong co so nguyen duong le lon nhat!");
	else printf("\n\nSo nguyen duong le lon nhat la %d", maxSL(a,n));
}	
