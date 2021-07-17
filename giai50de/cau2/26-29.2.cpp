//So nguyen to cuoi cung cua mang
#include <stdio.h>
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
void xuatNT(int a[], int n){
	int nt, dem = 0;
	for(int i=0;i<n;i++){
		if(soNT(a[i])){
			nt = a[i];
			dem++;
		}
	}
	if(dem ==0) printf("\n\nKhong co so nguyen to trong mang!");
	else printf("\n\nSo nguyen to cuoi cung trong mang la: %d", nt);
}
int main() {
	int i,n;
	printf("Nhap n = ");
	scanf("%d", &n);
	int a[n];
	nhapMang(a, n);
	printf("Mang vua nhap la: ");
	xuatMang(a, n);
	xuatNT(a, n);
}
