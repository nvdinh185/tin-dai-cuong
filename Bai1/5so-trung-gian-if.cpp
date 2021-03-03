#include <stdio.h>
#include <conio.h>
main()
{
	float a,b,c,max,min;
	printf("nhap a,b,c:");
	scanf("%f%f%f",&a,&b,&c);
	max = a;
	if(b>max) max = b;
	if(c>max) max = c;
	min = a;
	if(b<min) min = b;
	if(c<min) min = c;
	printf("so trung gian la: %.0f",a+b+c-max-min);
	getch();
}

