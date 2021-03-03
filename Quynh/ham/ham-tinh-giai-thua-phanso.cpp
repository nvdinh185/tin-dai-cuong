#include<stdio.h>

int giaithua(int n)
{
    int i=1,tich = 1;
    for(i=1;i<=n;i++)
	{
        tich*=i;
    }
    return tich;
}

 float tinhtong( int n)
{
    int  i;
    float sum=0;
    for(i=1;i<=n;i++)
	{
        sum+=(float)1/giaithua(i);
    }
    return sum;
}

int main(){
    int n;
    printf("nhap n = ");
    scanf("%d",&n);
    printf("tong = %.2f",tinhtong(n));
}
