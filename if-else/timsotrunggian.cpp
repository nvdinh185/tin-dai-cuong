#include<stdio.h>

/* thuat toan
    b1: nhap a,b,c
	b2: tim max, min
	b3: tim so trung gian = a + b + c - max - min
	b4: xuat ket qua
*/
	
int main()
{
  int a, b, c, sotrunggian;
  printf ("nhap a, b, c = ");
  scanf ("%d%d%d", &a, &b, &c);
  int max = a;
  if (max<b) max = b;
  if (max<c) max = c;
  int min = a;
  if (min>b) min = b;
  if (min>c) min = c;
  sotrunggian = a + b + c - max - min;
  printf ("So lon nhat la %d\n", max);
  printf ("So be nhat la %d\n", min);
  printf ("So trung gian la %d", sotrunggian);
}
