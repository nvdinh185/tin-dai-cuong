# include <stdio.h>
# include <math.h>
int main ()
{ int a,b,c;
  float x,x1,x2,delta;
  printf ("Nhap a,b,c=");
  scanf ("%d%d%d",&a,&b,&c);
  delta= b*b - 4*a*c;
  if (delta <0) printf ("phuong trinh vo nghiem");
  if (delta ==0){
  x=-b/2*a;
  printf ("phuong trinh co nghiem kep=%f");}
   if (delta >0) {
  x1= (-b+sqrt(delta))/2*a;
  x2= (-b-sqrt(delta))/2*a;
  printf ("x1 =%f",x1);
  printf ("x2 =%f",x2);}
  
  
}
