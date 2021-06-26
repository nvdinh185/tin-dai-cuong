#include <stdio.h>

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

main(){
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);
	int a[n];
	nhapMang(a, n);
//	int num = sizeof(a)/sizeof(a[0]);
//    printf("%d", num);
	xuatMang(a, n);
}
