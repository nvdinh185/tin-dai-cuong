# include <stdio.h>;
# include <math.h>;
int main()
{ int x;
  float tu, mau;
 printf ("Nhap x= ");
 scanf ("%d",&x);
 tu =pow(x,2/3) + pow(x,5)+log(pow(x,4)+1);
 mau= pow(x,2)+ M_PI/4;
 printf ("%f/%f=%f",tu,mau,tu/mau);
}
