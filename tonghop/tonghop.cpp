#include<stdio.h>
/*
	1. In ra nhung so la so nguyen to
	2. Dem xem co bao nhieu so nguyen to
	3. Tim so nguyen to lon nhat
	4. Sap xep cac so theo thu tu tu nho den lon, a < b < c < d
*/

int nguyento(int n){
	int i, dem = 0;
	for(i=2; i<n; i++)
	{
		if(n%i==0) dem++;	
	}
	if(dem==0) return 1;
	return 0;
}

void hoandoi(int &a, int &b){
	int tam = a;
	a = b;
	b = tam;
}

main(){
	int a = 2, b = 4, c = 5, d = 3, dem = 0, max;
	printf("Cac so nguyen to la: ");
	if(nguyento(a)){
		printf("%3d", a);
		dem++;
		max = a;
	}	 
	if(nguyento(b)) {
		printf("%3d", b);
		dem++;
		if(max<b) max = b;
	}
	if(nguyento(c)) {
		printf("%3d", c);
		dem++;
		if(max<c) max = c;
	}
	if(nguyento(d)) {
		printf("%3d", d);
		dem++;
		if(max<d) max = d;
	}

	printf("\nSo luong cac so nguyen to la: %d", dem);
	printf("\nSo nguyen to lon nhat la: %d", max);
	printf("\nTruoc khi sap xep:\n a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
	
	if(a>b) hoandoi(a, b);
	if(a>c) hoandoi(a, c);
	if(a>d) hoandoi(a, d);
	
	if(b>c) hoandoi(b, c);
	if(b>d) hoandoi(b, d);
	
	if(c>d) hoandoi(c, d);
	
	printf("\nSau khi sap xep:\n a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
}
