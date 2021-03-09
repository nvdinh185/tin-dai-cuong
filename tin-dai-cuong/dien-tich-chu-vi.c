#include<stdio.h>
int main(){
     int a, b;
	float P, S;
    printf(" nhap a : ");
    scanf("%d",&a);

 
    printf(" Nhap b : ");
    scanf("%d",&b);
	P=(( a + b )/2 );
	S=a*b;
	
	printf(" Chu vi hinh chu nhat la :    %0.2f\n ", P );

	printf(" Dien tich hinh chu nhat la : %0.2f\n ", S );


	return 0;
	
}
