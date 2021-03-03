#include <stdio.h>
#include <conio.h>

void swap1(int &a, int &b){//Hoan doi khong dung bien tam
	a = a + b;
	b = a - b;
	a = a - b;
}

void swap2(int &a, int &b){//Hoan doi dung phep XOR
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
}

void swap3(int &a, int &b){//Hoan doi dung bien tam
	int tam;
	tam = a;
	a = b;
	b = tam;
}
main(){
	int a, b;
	printf("Nhap a, b: ");
	scanf("%d%d", &a, &b);
	swap3(a, b);
	
	printf("Gia tri a sau khi hoan doi %d\n", a);
	printf("Gia tri b sau khi hoan doi %d\n", b);
	getch();
}
