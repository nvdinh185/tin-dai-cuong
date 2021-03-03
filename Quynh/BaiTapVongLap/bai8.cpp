# include<stdio.h>
# include<math.h>

int main() 
{
	float a,b,c;
	printf ("Nhap a,b,c ");
	scanf ("%f%f%f", &a, &b, &c);
	if (a<b+c && b<a+c && c<a+b) 
	{
		printf ("la ba canh 1 tam giac\n");
		if( a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b)
		printf ("Day la tam giac vuong");
        else if(a==b&&b==c)
			printf ("Day la tam giac deu");
        else if(a==b || a==c || b==c)
            printf ("Day la tam giac can");
        else if(a==b&&c*c==a*a+b*b || a==c&&b*b==a*a+c*c || b==c&&a*a==b*b+c*c)
            printf ("Day la tam giac vuong can");
        else 
            printf ("Day la tam giac thuong");
	}
    else 
        printf ("Ba canh a, b, c khong phai la ba canh cua mot tam giac");
    return 0;
}

//Bai nay tu lam hay chep lai bai cu???

