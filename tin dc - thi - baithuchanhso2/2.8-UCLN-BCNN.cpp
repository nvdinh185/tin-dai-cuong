//UCLN va BSCNN cua a,b
#include <stdio.h>
int main() {
	int a,b;
	printf("Nhap 2 so a,b:");
	scanf("%d%d", &a, &b);
	if(a>=0 && b>=0) {
		if (a==0 && b==0) 
		    printf("Khong ton tai UCLN va BCNN\n");
        else if ( a==0 || b==0) 
		           printf("Khong co BCNN, UCLN = %d",(a==0) ? b:a );
		else { 
	             int bc = a * b;
	             while (a != 0) { 
	                int x = a;
	                a = b % a;
	                b = x;
	             }  
	             printf("UCLN = %d\n",b);
	             printf("BCNN = %d\n", bc/b);
	    }
	} else  printf("Nhap a,b >0");	
}
