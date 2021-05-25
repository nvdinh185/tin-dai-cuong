/*
ax^4 + bx^2 + c = 0
at^2 + bt + c = 0
tinh delta = b*b - 4*a*c;
-neu delta < 0 => pt vo nghiem
-neu delta = 0 => tinh nghiem kep t
	+neu t < 0 => pt vo nghiem
	+ nguoc lai => tinh 2 nghiem x1, x2 = +-sqrt(t);
-neu delta > 0: tinh cac nghiem t1, t2
	+ neu t1 < 0 && t2 < 0 => pt vo nghiem
	+neu t1>=0&&t2<0 => tinh nghiem theo t1
	+neu t1<0&&t2>=0=> tinh nghiem theo t2
	+nguoc lai: tinh 4 nghiem theo t1 va t2
*/

#include<stdio.h>
#include<math.h>

main(){
	float a, b, c, delta, t1, t2, x1, x2, x3, x4;
	printf("Nhap a = ");
	scanf("%f", &a);
	printf("Nhap b = ");
	scanf("%f", &b);
	printf("Nhap c = ");
	scanf("%f", &c);
	delta = b*b - 4*a*c;
	if(delta<0) printf("Pt vo nghiem");
	else if(delta == 0){
		t1= -b/(2*a);
		if(t1<0) printf("Pt vo nghiem");
		else {
			x1 = sqrt(t1);
			x2 = -sqrt(t1);
			printf("Nghiem cua pt la x1 = %f, x2 = %f", x1, x2);
		}
	}else{
		t1 = (-b+sqrt(delta))/(2*a);
		t2 = (-b-sqrt(delta))/(2*a);
		if(t1<0&&t2<0) printf("Pt vo nghiem");
		else if(t1>=0&&t2<0){
			x1 = sqrt(t1);
			x2 = -sqrt(t1);
			printf("Nghiem cua pt la x1 = %f, x2 = %f", x1, x2);
		}else if(t1<0&&t2>=0){
			x1 = sqrt(t2);
			x2 = -sqrt(t2);
			printf("Nghiem cua pt la x1 = %f, x2 = %f", x1, x2);
		}else{
			x1 = sqrt(t1);
			x2 = -sqrt(t1);
			x3 = sqrt(t2);
			x4 = -sqrt(t2);
			printf("Nghiem cua pt la x1 = %f, x2 = %f, x3 = %f, x4 = %f", x1, x2, x3, x4);
		}
	}
}
