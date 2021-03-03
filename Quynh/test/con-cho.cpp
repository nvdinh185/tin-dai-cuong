# include <stdio.h>
# include <conio.h>
int main()
{ 
char luachon;
printf ("Cau hoi: con cho di chuyen bang may chan?\n ");
printf ("A.1 \n B.2 \n C.3 \n D.4\n");
printf ("Nhap vao dap an ban chon (A,B,C,D):");
luachon=getchar( );
switch (luachon){
	case 'A':
	case 'B':
	case 'C':
printf ("\nRat tiec, ban da chon sai!");
	break;
	case 'D':
   	   printf ("\nChuc mung ban da dung!");
   	    break;
   default:
   printf ("\nDap an ban chon khong phu hop") ;}
		   
return 0;
}
