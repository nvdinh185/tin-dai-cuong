# include <stdio.h>

int main (){
	int luachon;
	printf ("1. Tinh tong hai so nguyen\n");
	printf ("2. Tinh hieu hai so nguyen\n");
	printf ("3. Tinh tich hai so nguyen\n");
	printf ("4. Chia lay nguyen hai so nguyen\n");
	printf ("5. Chia lay du hai so nguyen\n");
	printf ("0. Bo qua\n\n");
	printf ("Ban chon?: ");
	scanf ("%d", &luachon);
	switch(luachon){
		case 0: break;
		case 1: {
			int a,b;
			printf ("Nhap a,b: ");
			scanf ("%d%d", &a, &b);
			printf ("%d + %d = %d", a, b, a+b);
			break;
		}
		case 2: {
			int a,b;
			printf ("Nhap a,b: ");
			scanf ("%d%d", &a, &b);
			printf ("%d - %d = %d", a, b, a-b);
			break;
		}
		case 3: {
			int a,b;
			printf ("Nhap a,b: ");
			scanf ("%d%d", &a, &b);
			printf ("%d * %d = %d", a, b, a*b);
			break;
		}
		case 4: {
			int a,b;
			printf ("Nhap a,b: ");
			scanf ("%d%d", &a, &b);
			printf ("%d / %d = %d", a, b, a/b);
			break;
		}	
		case 5: {
			int a,b;
			char mod = '%';
			printf ("Nhap a,b: ");
			scanf ("%d%d", &a, &b);
			printf ("%d %c %d = %d", a, mod, b, a%b);
			break;
		}
	}
}
