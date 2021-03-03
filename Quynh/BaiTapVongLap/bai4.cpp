#include<stdio.h>

int main()
{
	int n, i;
	float p, r;
	printf ("Nhap n = ");
	scanf ("%d",&n);
	printf ("Nhap r = ");
	scanf ("%f", &r);
	printf ("Nhap p = ");
	scanf ("%f",&p);
	for(i=0; i<n; i++)
	{
		p*=1.02;
		printf ("a = %.2f\n",p);
	}
	
}

//Bai lam chua chinh xac, phai tinh p dua vao lai suat nhap vao (r)
