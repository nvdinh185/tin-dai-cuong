#include<stdio.h>
#include<math.h>

int giaithua(int n)
{
    int i=1,tich = 1;
    for(i=1;i<=100;i++)
	{
		if(i%2==1)
        tich*=2*i+1;
    }
    return tich;
}
float sum (int x)
{
	int i;
	float tinhtong=0;
	for(i=1; i<=100; i++)
	{
		if(i%2==1)
		tinhtong=tinhtong+fabs(sin(pow(-1,i)*pow(x,2*i+1)/giaithua(i)));
	}
	return tinhtong;
}

int main()
{
	int x=5;
	printf("%f", sum(x));
}
