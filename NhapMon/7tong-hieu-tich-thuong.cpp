#include <stdio.h>
main()
{
	int x,y;
	printf("Nhap x: ");scanf("%d",&x);
	printf("Nhap y: ");scanf("%d",&y);
	int tong = x + y;
	int hieu = x - y;
	int tich = x*y;
	int chianguyen = x/y;
	int chiadu = x%y;
	float chiathapphan = (float) x/y;
	printf("Tong: %d + %d = %d\n",x,y, tong);
	printf("Hieu: %d - %d = %d\n",x,y, hieu);
	printf("Tich: %d * %d = %d\n",x,y, tich);
	printf("Chia nguyen: %d / %d = %d\n",x,y, chianguyen);
	printf("Chia du: %d %% %d = %d\n",x,y, chiadu);
	printf("Chia thap phan: %d / %d = %f",x,y, chiathapphan);
}

