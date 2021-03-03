# include <stdio.h>
int main()
{ char luachon;
  printf ("cau hoi con cho di bang may chan?\n ");
  printf ("A.1\n B.2\n C.3\n D.4\n");
  printf ("nhap dap an cua ban (A,B,C,D):");
  luachon = getchar();
  switch (luachon){
  	case 'A':
  	case 'B':
  	case 'C':
printf ("Rat tiec ban da chon sai!");
    case 'D':
printf ("Chuc mung ban da chon dung!");}
    return 0;
}


  
