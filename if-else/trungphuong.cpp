# include <stdio.h>
# include <math.h>
int main()
{ /*
	Thuat toan: Giai phuong trinh trung phuong voi cac he so a, b, c thuc, khac 0
	B1: Nhap cac he so a, b, c
	B2: Tinh delta = b*b - 4*a*c
	B3: Xet cac truong hop:
		- Neu delta < 0: Phuong trinh vo nghiem
		- Neu delta = 0: Tinh nghiem kep: t = -b/(2*a), 
			+ neu nghiem kep < 0 thi phuong trinh vo nghiem
			+ neu nghiem kep >= 0 thì phuong trinh có 2 nghiem +-sqrt(t)
		- Neu delta > 0: Tinh 2 nghiem t1, t2
			+ neu ca 2 nghiem < 0: Phuong trinh vo nghiem
			+ Neu 1 trong 2 nghiem < 0: Tinh nghiem theo nghiem duong x = +-sqrt(t)
			+ neu ca 2 nghiem deu > 0: Tinh 4 nghiem x1, x2, x3, x4
	B4: Ket luan
		
*/
   int a,b,c;
   float t1,t2,x1,x2,x3,x4,delta;
   printf ("Nhap a,b,c=");
   scanf ("%d%d%d",&a,&b,&c);
   delta= b*b-4*a*c;
   if (delta<0) printf ("phuong trinh vo nghiem");
   else if (delta==0) {
    t1=-b/(2*a);
    if (t1<0) printf ("phuong trinh vo nghiem");
    else 
    {x1 = sqrt (t1);
    x2 =-sqrt (t1);
    printf ("%f,%f",x1,x2);
    }
    if (t2<0) printf ("phuong trinh vo nghiem");
    else
    {x1= sqrt(t1);
    x2 = -sqrt(t2);
     printf ("%.2f,%.2f",x1,x2);
    }
  }else {
  	t1 =(-b+sqrt(delta))/2*a;
  	t2 =(-b-sqrt(delta))/2*a;
  	if (t1<0&&t2<0) printf ("phuong trinh vo nghiem");
  	if (t1<0) 
  	 x1=sqrt(t2);
  	 x2=sqrt(t2);
  	 printf ("%f,%f",x1,x2);}
  	if (t2<0)
  	 {x1=sqrt(t1);
  	 x2= -sqrt(t1);
  	 printf ("%f,%f",x1,x2);}
  	else
  	{x1=sqrt (t1);
  	x2=-sqrt (t1);
  	x3=sqrt (t2);
  	x4=-sqrt (t2);
  	printf ("%f,%f,%f,%f",x1,x2,x3,x4);}

  
    
}
