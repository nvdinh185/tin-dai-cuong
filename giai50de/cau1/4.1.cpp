#include <stdio.h>
#include <conio.h>
#include <math.h>
int giaithua(int n) {
	int i, s = 1;
	for (i =1; i <=n ; i++) s*=i;
	return s;
}
main () {
	int n, x, k;
	float s = 1;
	printf ("Nhap n, x: ");
	scanf ("%d%d",&n,&x);
	for (k =1 ; k<= n; k++) 
		s+= ( 1.0*( pow(x,k) ) )/( giaithua(k));
	printf ("S = %.2f",s);
}
