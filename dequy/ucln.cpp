#include<stdio.h>

int ucln(int a, int b){
	int r;
	if(a>b){
		r = a%b;
		if(r==0) return b;
		else return ucln(b, r);
	}else if(a<b){
		r = b%a;
		if(r==0) return a;
		else return ucln(a, r);
	}else return a;	
}

int main()
{
	printf("%d\n", ucln(48,36));
	printf("%d\n", ucln(36,36));
	printf("%d\n", ucln(36,48));
}
