#include<stdio.h>//good

int nguyento(int n)
{
	int i, dem = 0;
	for(i=2; i<n; i++)
	if(n%i==0)
	{
		dem++;
	}
	if(dem==0) return 1;
	else return 0;
}

int main()
{
	int n = 7, kiemtra;
	kiemtra = nguyento(n);
	if(kiemtra==1) printf("%d la so nguyen to", n);
	else printf("%d khong phai so nguyen to", n);
}
