#include<stdio.h>
#include<math.h>

main()
{
//	float a = 2.0F, b = 2.0F, c = sqrt(a*a+b*b);
//	float d=c*c, e = a*a+b*b;
//	printf("%f\n", d);
//	printf("%f", e);
//	if(d==e) printf("DK Dung!");
//	else printf("DK Sai!");

	float a = (float) 2.0, b = (float) 2.0, c = (float) sqrt(a*a+b*b);
	float d=(float) c*c, e = (float) a*a+b*b;
	printf("%f\n", d);
	printf("%f", e);
	if(d==e) printf("DK Dung!");
	else printf("DK Sai!");

//	float x = 0.2F;
//    if(x < 0.2F)
//        printf("Damn, C is a Mystery!\n");
//    else
//        printf("Obvious\n");
//        
//    float z = 0.7F;
//    if(z < 0.7F)
//        printf("Damn, C is a Mystery!");
//    else
//        printf("Obvious");
}
