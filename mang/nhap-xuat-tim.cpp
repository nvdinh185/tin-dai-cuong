#include <stdio.h>

#define MAX 10

void nhapMang(int a[], int n){
	for(int i=0; i<n; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}	
}

void xuatMang(int a[], int n){
	for(int i=0; i<n; i++){
		printf("%4d", a[i]);
	}
}

int check(int a[], int n, int x){
	int count = 0;
	for(int i=0; i<n; i++){
		if(a[i]==x) count++;
	}
	return count;
}

main(){
	int a[MAX];
	int n, x;
	printf("Nhap n = ");
	scanf("%d", &n);
	nhapMang(a, n);
	printf("Mang vua nhap la:\n");
	xuatMang(a, n);
	printf("\nNhap so nguyen x = ");
	scanf("%d", &x);
	if(check(a, n, x)){
		printf("So lan so nguyen %d xuat hien trong mang la: %d", x, check(a, n, x));
	}else{
		printf("So nguyen %d khong xuat hien trong mang!", x);
	}
}
