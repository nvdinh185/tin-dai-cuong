# include<stdio.h>

int main() 
{
/*	thuat toan
    b1: Nhap a,b,c
	b2: kiem tra xem do co phai ba canh mot tam giac khong
	   (a<b+c && b<a+c && c<a+b) 
	b3: ket luan tam giac do la tam giac gi.
	   - tam giac vuong (a*a==b*b+c*c||b*b==a*a+c*c||c*c=b*b+a*a
	   - tam giac deu (a==b && b==c)
	   - tam giac can (a==b||a==c||b==c)
	   - tam giac vuong can(a==b&&c==a*a+b*b|| a==c&&b*b=a*a+c*c||b==c&&a*a=b*b+c*c)
	   - con lai la tam giac thuong
*/
	float a, b, c;
	printf ("Nhap a, b, c: ");
	scanf ("%f%f%f", &a, &b, &c);
	if (a<b+c && b<a+c && c<a+b){
		if(a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b){
			printf ("Day la tam giac vuong");
		} else if(a==b && b==c){
			printf ("Day la tam giac deu");
		} else if(a==b || a==c || b==c){
            printf ("Day la tam giac can");
        } else if(a==b&&c*c==a*a+b*b || a==c&&b*b==a*a+c*c || b==c&&a*a==b*b+c*c){
            printf ("Day la tam giac vuong can");
        } else {
            printf ("Day la tam giac thuong");
        }
	} else {
        printf ("Ba canh a, b, c khong phai la ba canh cua mot tam giac");
    }

    return 0;
}

