#include <stdio.h>
#include <math.h>

void nhapMang(int a[], int n){
	int i;
	for(i=0; i<n; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}	
}

void xuatMang(int a[], int n){
	for(int i=0; i<n; i++){
		printf("%6d", a[i]);
	}
}

int maxOfArray(int a[], int n){
	int max = a[0];
	for(int i=1; i<n; i++){
		if(max<a[i]) max = a[i];
	}
	return max;
}

int checkArmstrong(int n){
	int sogoc, donvi, sum = 0;
	sogoc = n;
	
	int count = 0;
    while (n > 0){
        count++;
		n /= 10;        
    }
    
	n = sogoc;
	while(n > 0) {
		donvi = n%10;
		sum += pow(donvi, count);
		n = n/10;
	}
	if(sum==sogoc) return 1;
	return 0;
}

void xuatArmstrong(int a[], int n){
	for(int i=0; i<n; i++){
		if(checkArmstrong(a[i])) printf("%6d", a[i]);
	}
}

int sumArmstrong(int a[], int n){
	int sum = 0;
	for(int i=0; i<n; i++){
		if(checkArmstrong(a[i])) sum += a[i];
	}
	return sum;
}

void hoanDoi(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}

void sapXep(int a[], int n){
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(a[i]>a[j]) hoanDoi(a[i], a[j]);
		}
	}
}

main(){
	int a[100];
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);
	nhapMang(a, n);
	// xuat mang vua nhap
	printf("\nMang vua nhap la:");
	xuatMang(a, n);
	printf("\n\nGia tri lon nhat trong mang la: %d", maxOfArray(a, n));
	printf("\n\nCac so Armstrong trong mang la: ");
	xuatArmstrong(a, n);
	printf("\n\nTong cac so Armstrong trong mang la: %d", sumArmstrong(a, n));
	// goi ham sap xep mang
	sapXep(a, n);
	printf("\n\nMang sau khi sap xep:");
	xuatMang(a, n);
}
