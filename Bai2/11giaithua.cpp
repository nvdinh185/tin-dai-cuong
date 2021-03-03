#include <stdio.h>
#include <conio.h>

long giaiThuaFor(int n){
	int i;
	long gt=1;
	for(i=n; i>1; i-=2) gt*=i;
	return gt;
}

long giaiThuaWhile(int n){
	long gt=1;
	while(n>1){
		gt *= n;
		n-=2;
	}
	return gt;
}

long giaiThuaDoWhile(int n){
	long gt=1;
	do{
		gt *= n;
		n-=2;
	}while(n>1);
	return gt;
}

long giaiThuaDeQuy(int n){
	if(n<2) return 1;
	else return n*giaiThuaDeQuy(n-2);
}
main(){
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);
	
	printf("Ket qua giai thua for %ld!! = %d\n", n, giaiThuaFor(n));
	printf("Ket qua giai thua while %ld!! = %d\n", n, giaiThuaWhile(n));
	printf("Ket qua giai thua do...while %ld!! = %d\n", n, giaiThuaDoWhile(n));
	printf("Ket qua giai thua de quy %ld!! = %d\n", n, giaiThuaDeQuy(n));
	getch();
}
