#include <stdio.h>
#include <conio.h>

void nhapMang(int a[], int n){
	int i;
	for(i=0; i<n; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}	
}

void xuatMang(int a[], int n){
	int i;
	for(i=0; i<n; i++){
		printf("%4d", a[i]);
	}
}

void daoMang(int a[], int n){
	int i;
	int temp;
	for(i=0; i<n/2; i++){
		temp = a[i];
		a[i] = a[n-1-i];
		a[n-1-i] = temp;
	}
}
main(){
	int a[100];
	int n;
	do {
		printf("Nhap n = ");
		scanf("%d", &n);
	}while (n<10);
	nhapMang(a, n);
	printf("Mang nhap vao:\n");
	xuatMang(a, n);
	printf("\n");
	daoMang(a, n);
	printf("Mang sau khi dao:\n");
	xuatMang(a, n);
	getch();
}
