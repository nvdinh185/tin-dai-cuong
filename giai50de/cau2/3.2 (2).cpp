#include <stdio.h>
#include <conio.h>
void nhap(int a[], int n) {
	for (int i=0; i<n; i++) {
		printf ("A[%d] = ",i);
		scanf ("%d", &a[i]);
	}
}

void xuat(int a[], int n) {
	for (int i=0; i<n; i++) printf ("%6d", a[i]);
	printf ("\n");
}

int kt(float n) {
	int i; float s=0;
	if (n == (int) n) {
		for (i=1; i<n; i++) if ((int) n%i==0) s+=i;
		return (s==n);
	} else return 0;
}

void xoa(int a[], int &n, int x) {
	int i,j;
	for (i=0; i<n; i++) {
		do {
			if (a[i]==x){
				for (j=i; j<n-1; j++) a[j] = a[j+1];
				n--;
			}
		} while (a[i]==x);
	}
}

main () {
	int n, x;
	do {
		printf ("Nhap n: ");
		scanf ("%d", &n);
		if (n<10) printf ("Nhap lai n>=10\n");
	} while (n<5);
	int a[n];
	printf ("Nhap mang: \n");
	nhap(a,n);
	printf ("Cac phan tu cua mang la: ");
	xuat(a,n);
	printf ("\n");
	printf ("Nhap so nguyen x: ");
	scanf ("%d", &x);
	xoa(a,n,x);
	xuat(a,n);
	getch();
}
