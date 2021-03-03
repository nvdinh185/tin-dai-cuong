# include <stdio.h>
# include <math.h>
int main ()
{ 
/*
Thuat toan:
B1: Dung ham pow de Tinh 2 mu 3
B2: Nhap x, y, sau do tinh x mu y
B3: Tinh can bac n cua x mu m
B2: in ket qua
*/

int n,x,y,dapan;

n=pow(2,3);
printf ("%d",n);
printf ("Nhap x");
scanf("%d",&x);
printf ("Nhap y");
scanf ("%d",&y);
dapan=pow(x,y);
printf ("%d",dapan);




}

