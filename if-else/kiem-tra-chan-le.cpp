#include <stdio.h>
#include <conio.h>

main()
{
	int n;
	printf("Nhap so nguyen n: ");
	scanf("%d", &n);
	if (n % 2 == 0)	printf("%d la so chan", n);
	else printf("n la so le");
	getch();
}

