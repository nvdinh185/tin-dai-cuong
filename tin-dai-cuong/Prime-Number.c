#include <stdio.h>
int main()
{
    int i, j, start, end;
    int isPrime;

    printf("Gioi han mien tren: ");
    scanf("%d", &start);
    printf("Gioi han mien duoi: ");
    scanf("%d", &end);
    printf("Tat ca cac so nguyen to tu %d den %d la:\n", start, end);

    if(start < 2) 
        start = 2;

    for(i=start; i<=end; i++)
    {
        isPrime = 1; 

        for(j=2; j<=i/2; j++)
        {
            
            if(i%j==0)
            {
                isPrime = 0;
                break;
            }
        }

        if(isPrime==1)
        {
            printf("%d, ", i);
        }
    }

    return 0;
}
