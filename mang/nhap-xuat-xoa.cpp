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
		printf("%5d", a[i]);
	}
}

void xoaPhanTuDauTienTimThay(int a[], int &n, int x){
	for(int i=0; i<n; i++) {
		if(a[i]==x){
			for(int j=i; j<n-1; j++) a[j] = a[j+1];
			n--;
			break;
		}
	}
}

void xoaTatCa(int a[], int &n, int x) {
	for (int i=0; i<n; i++) {
		do {
			if (a[i]==x){
				if(i==n-1){
					n--;
					break;
				}
				for (int j=i; j<n-1; j++) a[j] = a[j+1];
				n--;
			}
		} while (a[i]==x);
	}
}

int xoaMang(int a[], int &n, int x){	 
    int i, j;
    for(i=0; i<n; i++) {
	    if(a[i] == x) {
		    for(j=i; j<n-1; j++) {
		        a[j] = a[j+1];
		    }
	        n--;
	        i--;
	    }
 	}
}

main(){
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);
	int a[n];
	nhapMang(a, n);
	printf("\n\nMang nhap vao la: ");
	xuatMang(a, n);
	int x;
	printf("\n\nNhap phan tu muon xoa: ");
	scanf("%d", &x);
//	xoaPhanTuDauTienTimThay(a, n, x);
	xoaMang(a, n, x);
	printf("\n\nMang sau khi xoa: ");
	xuatMang(a, n);
}
