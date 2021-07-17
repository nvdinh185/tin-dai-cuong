#include <stdio.h>
#include <math.h>
void nhapMang(int a[], int n){
	for(int i=0; i<n; i++){
		printf("a[%d] = ", i);
		scanf("%6d", &a[i]);
	}	
}
void xuatMang(int a[], int n){
	for(int i=0; i<n; i++){
		printf("%6d", a[i]);
	}
}
int xoaMang(int a[],int &n,int x){	 
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

int main(){
	int n,x;
	printf("Nhap n = ");
	scanf("%d", &n);
	int a[n];
	nhapMang(a,n);
	printf("Mang nhap vao:\n");
	xuatMang(a, n);
	printf("\nNhap x=");
	scanf("%d",&x);
	printf("\n");
	xoaMang(a,n,x);
	printf("Mang sau khi xoa:");
	xuatMang(a,n);
	
}

