#include<stdio.h>

int giaithua(int n){
	if(n==0 || n==1)
	return 1;
	else return n*giaithua(n-1);	
}

int main()
{
	int n = 12; // toi da chi tinh duoc 12
	printf("%d! = %d", n, giaithua(n));
}
