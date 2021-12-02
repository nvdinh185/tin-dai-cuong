#include <stdio.h>
int main() {
	int i,n, s, s1,s2;
	s = 0 ; s1 = 0;s2 = 0;
	printf("Nhap n:"); 
	scanf("%d", &n);
	for(i=1; i<n; i++) 
	{	s+= i;  
		if(i%2==0) s2+=i; 
	    else s1+=i;
	}
	printf("Tong cac so nho hon n: S = %d\n",s); 
	printf("Tong cac so le nho hon n: S1 = %d\n",s1); 
	printf("Tong cac so chan nho hon n: S2 = %d\n",s2);   
	}
