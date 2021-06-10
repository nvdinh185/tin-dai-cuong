#include<stdio.h>

int ucln(int a, int b){
	int r;
	if(a>b){
		r = a%b;
		if(r==0) return b;
		else return ucln(b, r);
	}else if(a<b){
		r = b%a;
		if(r==0) return a;
		else return ucln(a, r);
	}else return a;	
}

int USCLN(int a, int b) {
    if (b == 0) return a;
    return USCLN(b, a % b);
}

int BSCNN(int a, int b) {
    return (a * b) / USCLN(a, b);
}

int main()
{
	printf("%d\n", ucln(48,36));
	printf("%d\n", ucln(36,36));
	printf("%d\n", ucln(36,48));
	printf("\n\n");
	printf("%d\n", USCLN(48,36));
	printf("%d\n", USCLN(36,36));
	printf("%d\n", USCLN(36,48));
	printf("\n\n");
	// tinh BSCNN cua a và b
    printf("\BSCNN cua %d va %d la: %d", 6, 4, BSCNN(6, 4));
}
