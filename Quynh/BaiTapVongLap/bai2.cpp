#include<stdio.h>

int main()
{   int n,i;
	float sum=0;
	printf ("nhap n=");//nen cach ra cho thoang nhe
	scanf ("%d",&n);//
	for(i=1;i<=n;i++)
	{
		sum+= ((i%2)*2.0-1)/i;
	}
		printf ("%.2f\n",sum);//
}

//Bai lam tot
