#include<stdio.h>

void hoanDoi(int &a, int &b){
	int tam = a;
	a = b;
	b = tam;
}

void sapXep(int &a, int &b, int &c, int &d){
	if(a>b) hoanDoi(a, b);
	if(a>c) hoanDoi(a, c);
	if(a>d) hoanDoi(a, d);
	
	if(b>c) hoanDoi(b, c);
	if(b>d) hoanDoi(b, d);
	
	if(c>d) hoanDoi(c, d);
}

main(){
	int a = 2, b = 4, c = 5, d = 3;
	
	printf("Truoc khi sap xep:\n a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
		
	sapXep(a, b, c, d);
	
	printf("Sau khi sap xep:\n a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
}
