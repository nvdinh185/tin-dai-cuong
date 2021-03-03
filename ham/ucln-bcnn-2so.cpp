#include<stdio.h>

int UCLN(int a, int b){
	while(a!=b){
		if(a>b) a -= b;
		else b -= a;
	}
	return a;
}

int BCNN(int a, int b){
	return a*b/UCLN(a, b);
}

int main(){
	printf("UCLN %d\n", UCLN(6, 9));
	printf("BCNN %d", BCNN(9, 6));
}
