# include <stdio.h>
# include <math.h>
int main ()
/* thuat toan
   b1 nhap x,m,m
   b2 tinh 
   b3 xuat dap an*/

{
  int x,m,n;
  float dapan;
 printf("Nhap x=");
 scanf ("%d",&x);
  printf ("Nhap m=");
  scanf ("%d",&m);
  printf ("Nhap n=");
  scanf ("%d",&n);
  dapan =pow(x,(float)m/n);
  printf ("%f",dapan);


}
