#include <stdio.h>
#include <conio.h>
int mu(int x, int n) {
int i, s = 1;
for ( i = 1; i <= n; i++) s*=x;
return s;
}
main ( ) {
int n, x, m;
float s = 1;
printf ("Nhap n, x: ");
scanf ("%d%d",&n,&x);
for (m = 1; m <= n ; m++) s+= ( 1.0*mu(x, m) )/m;
printf ("S = %0.2f",s);
return 0;
}
