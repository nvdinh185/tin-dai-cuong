# include <stdio.h>
# include <math.h>

int main ()
{ 
	/* thuat toan 
	    b1:nhap a,b,c
		b2:tinh denta
		b3:neu denta lon hon khong co hai nghiem
		b4:neu denta bang khong co pt nghiem kep
		b5:neu denta be hon khong pt vo nghiem 
	*/
	int a, b, c;
	float denta, x1, x2, x;
	printf("Nhap a = ");
	scanf("%d", &a);
	printf("Nhap b = ");
	scanf("%d", &b);
	printf("Nhap c = ");
	scanf("%d", &c);
	denta = b*b - 4*a*c;
	if(denta>0){
		printf("Phuong trinh co hai nghiem:\n");
		x1=(-b + sqrt(denta))/(2*a);
		x2=(-b - sqrt(denta))/(2*a);
		printf ("x1 = %.2f\n",x1);
		printf ("x2 = %.2f",x2);
	}
	else if(denta==0){
		printf("Phuong trinh co nghiem kep:\n");
		x=-b/(2*a);
		printf("x = %.2f",x);
	}
	else 
		printf("Phuong trinh vo nghiem.");
}
