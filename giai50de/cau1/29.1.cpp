#include <stdio.h>

void in(float a[]);
main () {
	float a[]={0,1,2,3};
	in(a);
	return 0;
}

void in(float a[]) {
	int i,j,k,l, dem=0;
	for (i=0; i<4; i++) {
		for (j=0; j<4; j++) {
			for (k=0; k<4; k++) {
				for (l=0; l<4; l++) {
					if(j!=i && (k!=j && k!=i) && (l!=k && l!=j&& l!=i) && a[i]!=0 ) {
						printf("%0.2f\n",a[i]*10+a[j]+a[k]/10+a[l]/100);
						dem++;
					}
				}
			}
		}
	}
	printf ("Co %d cach",dem);
}
