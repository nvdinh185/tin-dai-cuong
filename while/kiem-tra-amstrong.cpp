#include<stdio.h>
#include<math.h>

int main()
{
	int n, sogoc, donvi, sum=0;
	
//	nhap n la so co nhieu hon 2 chu so
	do{
		printf("Nhap n co nhieu hon 2 chu so: ");
		scanf("%d", &n);
	}while(n<10);
	sogoc = n;
	
//	dem so chu so
	int count = 0;
    while (n > 0)
    {
        count++;
		n /= 10;        
    }
    
//	kiem tra so amrstrong
	n = sogoc;
	while(n > 0)
	{
		donvi = n%10;
		sum += pow(donvi, count);
		n = n/10;
	}
	if(sum==sogoc) printf("%d la so Amstrong!", sogoc);
	else printf("%d khong la so Amstrong!", sogoc);
}
