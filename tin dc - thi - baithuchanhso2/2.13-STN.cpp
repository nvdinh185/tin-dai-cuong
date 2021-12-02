// so doi xung
#include <stdio.h>
int main() { 
    int n,s=0,r,i;
	do { 
	     printf("Nhap so co 3 chu so tro len n:");
	     scanf("%d",&n);
	} while (n<100);
	i =n;
	while (i!=0) { 
	     r = i%10;
	     s = s*10+r;
	     i/=10;
	} 
	if( s==n ) printf("%d la so doi xung", n);
	else printf("%d khong phai la so doi xung",n);
}
