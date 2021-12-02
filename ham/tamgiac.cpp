#include <stdio.h>

int laTamGiac(int a, int b, int c){
	if(a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a) return 1;
	return 0;
}

int tamGiacCan(int a, int b, int c){
	if (a==b || b==c || c==a) return 1;
 	return 0;
}

int tamGiacDeu(int a, int b, int c){
	if (a==b && b==c) return 1;
 	return 0;
}

int tamGiacVuong(int a, int b, int c){
	if (a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b) return 1;
 	return 0;
}

void kiemTraTamGiac(int a, int b, int c){
	if(laTamGiac(a, b, c)){

		if(tamGiacDeu(a, b, c)) printf("Ba so vua nhap tao thanh tam giac deu!");

		else if(tamGiacCan(a, b, c)) printf("Ba so vua nhap tao thanh tam giac can!");

		else if(tamGiacVuong(a, b, c)) printf("Ba so vua nhap tao thanh tam giac vuong!");

		else printf("Ba so vua nhap tao thanh tam giac thuong!");

	} else printf("Ba so vua nhap khong tao thanh tam giac!");
}


int main(){
	int a, b, c;
	printf("nhap a = ");
	scanf("%d", &a);
	printf("nhap b = ");
	scanf("%d", &b);
	printf("nhap c = ");
	scanf("%d", &c);
	
	kiemTraTamGiac(a, b, c);
	
}
