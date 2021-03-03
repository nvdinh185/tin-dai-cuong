# include <stdio.h>
# include <math.h>
int main()
{ int x,y;
  float tu,mau;
  printf ("Nhap x=");
  scanf ("%d",&x);
  printf ("Nhap y=");
  scanf ("%d",&y);
  if ((x*x-y)>0)
 {
	  mau = cos(x+y) - sin(x);
  if (mau ==0) printf ("Loi mau so bang khong");
  else
  { 
    tu=exp(x+y) -log(x*x-y);
  	printf ("ket qua=%f/%f=%f",tu,mau,tu/mau);
  }
 } 
  else 
  printf ("Loi mien xac dinh cua ham Logarit");
}
