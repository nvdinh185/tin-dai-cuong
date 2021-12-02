//Liet ke so nguyen to
#include <stdio.h>
int main() {
	int n,dem = 0;
	printf("Nhap n:");
	scanf("%d",&n);
	for (int i=2;; i++){
		int count = 0;
		for (int j=2; j<i; j++){
			if (i%j==0) count++; 
		}
	    if(count==0) {
		      printf ("%5d", i);
		      dem++;
		} 
		if(dem==n) 
		   break;
	}
}
