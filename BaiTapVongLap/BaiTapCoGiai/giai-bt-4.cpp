#include<stdio.h>
#include<math.h>

int main()
{
	int n, i, r;
	float p, laisuat;
	printf("Nhap tien von p = ");
	scanf("%f", &p);
	printf("Nhap lai suat r (phan tram) = ");
	scanf("%d", &r);
	laisuat = (float) r/100;
	printf("Nhap so nam n = ");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		p += laisuat*p;
		printf("Von tich luy sau %d nam la %f\n", i, p);
	}
}
