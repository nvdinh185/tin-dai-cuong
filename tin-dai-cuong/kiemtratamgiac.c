#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float a,b,c;
	printf("nhap vao canh a :\n");
	scanf("%f",&a);
	printf("nhap vao canh b :\n");
	scanf("%f",&b);
	printf("nhap vao canh c :\n");
	scanf("%f",&c);
	
	if ( (a>=b+c) || (b>=a+c)  || (c>=a+b))
	{
		printf("3 canh tren khong phai la 3 canh cua tam giac");
	}
	
	else
	
	{
		if ( (a==b) && (b==c) && (c==a)    ) {  printf("day la tam giac deu"); }
	
	else
	
	if ( (a==b)  || (a==c)  || (b==c) )
	{printf("day la tam giac can");}
	
	else
	
	if ( ( a*a==b*b+c*c) || (b*b==a*a+c*c)   ||  (c*c==a*a+b*b))
	printf("day la tam giac vuong");
	
	else
	
	if(     (a*a==b*b+c*c) && (b==c)  ||
	        (b*b==a*a+c*c) && (a==c)  || 
	        (c*c==b*b+a*a) && (a==b) )
	        
	        printf(" day la tam giac vuong can");
	        
	        else 
	        printf(" day la tam giac thuong");
}

getch();
return 0;
}

