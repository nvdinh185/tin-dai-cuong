#include<stdio.h>

int main()
{
	float a,b,x;
	printf("Nhap he so a: ");
	scanf("%f", &a);
	printf("Nhap he so b: ");
	scanf("%f", &b);
	if(a==0){
		if(b==0){
			printf("phuong trinh co vo so nghiem:");	
		}else{ 
		   printf("phuong trinh vo nghiem:");
		}
	}else{
        x=-b/a;
		printf("phuong trinh co nghiem la x = %f",-b/a);
	}	
	return 1;
}
