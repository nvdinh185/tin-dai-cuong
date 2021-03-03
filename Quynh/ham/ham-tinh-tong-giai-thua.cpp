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

int tinhtong(int n)
{
    int sum=0, i;
    for(i=1;i<=n;i++)
	{
        sum+=giaithua(i);
    }
    return sum;
}

int main(){
    int n;
    printf("nhap n = ");
    scanf("%d",&n);
    printf("tong = %d",tinhtong(n));
}
