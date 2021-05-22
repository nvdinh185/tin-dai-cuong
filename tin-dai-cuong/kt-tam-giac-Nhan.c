#include<conio.h>
#include<stdio.h>
#include<math.h>
int main()
{
   int a,b,c;
   printf("Nhap ba canh cua tam giac: ");
   scanf("%d%d%d",&a,&b,&c);
   if (a>0 && b>0 && c>0){
		if (a<b+c && b<a+c && c<a+b){
	    	printf("ba canh tao thanh tam giac: ");
		}
		if (a==b && b==c && a==c){
	   		printf("tao thanh tam giac deu");
		}
	   	if (a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b){
			printf("tao thanh tam giac vuong");
		}
	    if ((a==b) || (b==c) || (a==c)){
	   		printf("tao thanh tam giac can");
	   	}
	    if ((a*a==b*b+c*c && b==c)||(b*b==a*a+c*c && a==c)||(c*c==b*b+a*a && b==a)){
	    	printf("tao thanh tam giac vuong can");	
		}
	}else{
		printf("Ba so khong tao thanh tam giac");
	}
}
