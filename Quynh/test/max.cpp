# include<stdio.h>
int main ()
{ int a,b,c,d;
  printf ("nhap a,b,c,d= ");
  scanf ("%d%d%d%d",&a,&b,&c,&d);
  /*
  Thuat toan:
  1. gan max = a;
  2. so sanh max voi b, neu max < b thi gan max = b;
  3, so sanh max voi c, neu max <c thi gan max =  c;
  4. so sanh max voi d, neu max <d thi gan max =  d;
  5. in max ra man hinh  
  */
  int max =a;
  if (max<b) max=b;
  if (max<c) max=c;
  if (max<d) max=d;
  printf ("max = %d", max);
} 
