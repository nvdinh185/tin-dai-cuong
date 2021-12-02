//so fibonacci thu n
#include <stdio.h>
int main() {
	int i,n,f0,f1,fn;
	f0 = 0; f1 =1;
	printf("Nhap n:");
	scanf("%d", &n);
	if(n<0) printf("Vui long nhap so duong!");
	else{ 
		if(n==0) printf("F0 = 0");
		if(n==1) printf("F1 = 1");
		if(n>=2) { 
    		for (i=2;i<=n;i++) { 
			fn = f0 + f1;
			f0 = f1;
			f1 = fn;
	        }
	    	printf("F%d = %d",n,fn);   
	    }
	}
}
