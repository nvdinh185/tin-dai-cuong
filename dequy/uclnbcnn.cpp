#include<stdio.h>

int USCLN(int a, int b) {
    if (b == 0) return a;
    return USCLN(b, a % b);
}

int BSCNN(int a, int b) {
    return (a * b) / USCLN(a, b);
}

int main()
{
	printf("%d\n", USCLN(48,36));
	printf("%d\n", USCLN(36,36));
	printf("%d\n", USCLN(12,18));
	printf("\n\n");
	// tinh BSCNN cua a và b
    printf("\BSCNN cua %d va %d la: %d", 6, 4, BSCNN(6, 4));
}
