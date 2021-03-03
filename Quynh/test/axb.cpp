
#include<stdio.h>

int main()
{ /*b1: Nhap cac he so a,b;
    b2: xet cac truong hop:
	 - Neu a=0,b=0: Phuong trinh vo so nghiem;
	 - Neu a=0,b!=0: phuong trinh vo nghiem;
	 - Neu a!=0: phuong trinh co nghiem duy nhat x=-b/a
	 b3: Xuat ket qua ra man hinh;*/
  int a,b;
  printf ("Nhap a=");
  scanf ("%d",&a);
  printf ("Nhap b=");
  scanf ("%d",&b);
  if (a==0&&b==0) printf ("phuong trinh vo so nghiem");
  if (a==0&&b!=0) printf ("phuong trinh vo nghiem ");
  
  if (a!=0) printf ("phuong trinh co nghiem duy nhat= %f",(float)-b/a);
  
}
