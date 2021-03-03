#include <stdio.h>
#include <conio.h>
main()
{
	float a,b,c,max,min;
	printf("nhap a,b,c:");
	scanf("%f%f%f",&a,&b,&c);
	max=a>b&&a>c?a:(b>c?b:c);
	min=a<b&&a<c?a:(b<c?b:c);
	printf("so can tim la:%f",a+b+c-max-min);
	getch();
}

