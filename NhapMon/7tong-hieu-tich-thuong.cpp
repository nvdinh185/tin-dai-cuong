#include <stdio.h>
main()
{
	int x,y;
	printf("Nhap x: ");scanf("%d",&x);
	printf("Nhap y: ");scanf("%d",&y);
	printf("Tong: %d + %d = %d\n",x,y,x+y);
	printf("Hieu: %d - %d = %d\n",x,y,x-y);
	printf("Tich: %d * %d = %d\n",x,y,x*y);
	printf("Chia nguyen: %d / %d = %d\n",x,y,x/y);
	printf("Chia du: %d %% %d = %d",x,y,x%y);
}

