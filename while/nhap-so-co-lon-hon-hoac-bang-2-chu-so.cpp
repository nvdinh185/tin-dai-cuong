#include<stdio.h>

int main()
{
	int n;
	do{
		printf("Nhap so n co nhieu hon 2 chu so: ");
		scanf("%d", &n);
	}while(n<10);
	
	printf("Gia tri cua n la %d", n);
}
