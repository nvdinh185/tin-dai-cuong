//so trung gian - toan tu
#include <stdio.h>
void tG(int a, int b, int c){
	int max, min;
	max = a;
	min = (b>max) ? a : b;
	max = (b>max) ? b : a;
	(c == max|| c == min|| max == min) ? printf("Khong co so trung gian"):
		(c>max) ? printf("So trung gian la %d", max) :
			(c<min) ? printf("So trung gian la %d", min) :
				printf("So trung gian la %d", c);
}
int main() {
	int a, b, c;
	printf("Nhap a,b,c: ");
	scanf("%d%d%d", &a, &b, &c);
	tG(a,b,c);
}
