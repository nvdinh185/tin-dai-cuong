//Xoa cac so hoan hao
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
int soHH(int x){
	int i,sum = 0;
	for(i=1; i<=x/2; i++) {
		if (x%i==0) sum+= i;
	}
	if(sum==x)
		return 1;
	else
		return 0;
}
void xoaHH(int a[], int &n){
	for(int i=0; i<n; i++){
		if(soHH(a[i])){
			for(int j=i;j<n-1; j++){
				a[j] = a[j+1];
			}
			n--;
			i--;
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
	xoaHH(a, n);
	printf("\n\nMang sau khi xoa cac so hoan hao:");
	xuatMang(a, n);
}
