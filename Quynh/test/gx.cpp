# include <stdio.h>
# include <math.h>
int main()
{ int x;
  float tu,mau;
  printf ("Nhap x=");
  scanf ("%d",&x);
	  tu=pow(x,3)+log(abs(x-3)+2)/log(5);
	  mau= (pow (atan(x-5),2)+1);
  printf ("g(x)=%f/%f=%.4f",tu,mau,tu/mau);
}
