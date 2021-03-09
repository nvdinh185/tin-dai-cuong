#include<stdio.h>
int main(){
	int a, b, c;
	printf("Nhap vao canh a = ");
	scanf("%f", &a);
	printf("Nhap vao canh b = ");
	scanf("%f", &b);
	printf("Nhap vao canh c = ");
	scanf("%f", &c);
	if((a < b + c) || (b < a + c) || (c < a + b)){
		printf("Day la tam giac . ");
	}else if((a == b) && (b == c)){
		printf("Day la tam giac deu. ");
	}else if((a == b) || (b == c) || (c == a)){
		if((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b)){
			printf("Day la tam giac vuong can. ");
		}else{
			printf("Day la tam giac can. ");
		}
	}else if((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b)){
		printf("Day la tam giac vuong ");
	}else{
		printf("Day khong phai la tam giac thuong. ");
	} 
	return 0;    
	
}
