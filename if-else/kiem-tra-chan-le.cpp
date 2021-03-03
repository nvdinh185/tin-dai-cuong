#include <stdio.h>
#include <conio.h>

main()
{
	int n;
	printf("Nhap so nguyen n: ");
	scanf("%d", &n);
	if (n % 2 == 0)	printf("n la so chan");
	else printf("n la so le");
	getch();
}

