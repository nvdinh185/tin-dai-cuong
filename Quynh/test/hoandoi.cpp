# include <stdio.h>
int main()
{int a,b; 
 printf ("truoc hoan doi\n");
 printf ("Nhap a=");
 scanf ("%d",&a);
 printf ("Nhap b=");
 scanf ("%d",&b);
 int hoandoi=a;
 a=b;
 b=hoandoi;
 printf("sau hoan doi\n");
 printf("a=%d\nb=%d",a,b);
}
