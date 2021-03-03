# include <stdio.h>
# include <math.h>
int main ()
{ int x,y;
  float tu, mau;
  printf ("Nhap x=");
  scanf ("%d",&x);
  printf ("Nhap y=");
  scanf ("%d",&y);
  tu=exp(x+y)+log(abs(pow(x,2))-y+5);
  mau = cos(x+y) - sin(x) +3;
  printf ("%f/%f=%f",tu,mau,tu/mau);
}
