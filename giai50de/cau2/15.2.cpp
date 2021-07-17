//Tông cac so nguyen to trong mang
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
int soNT (int x){
	int dem=0,i;
	for(i=1; i<=x; i++) {
		if (x%i==0) dem++;
	}
	if(dem==2) 
		return 1;
	else 
		return 0;
}
int tongNT(int a[], int n){
	int sum  = 0;
	for(int i=0;i<n;i++){
		if(soNT(a[i])) sum += a[i];
	}
	return sum;
}
int main() {
	int n;
	int a[MAX];
	do{
		printf("Nhap n = ");
		scanf("%d", &n);
		if(n<15) printf("Vui long nhap n >= 15!\n");
	}while (n<15);
	nhapMang(a, n);
	printf("Mang vua nhap la: ");
	xuatMang(a, n);
	printf("\n\nTong cac so nguyen to trong mang la: %d ",tongNT(a,n));
}
