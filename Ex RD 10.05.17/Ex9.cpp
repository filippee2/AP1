#include <stdio.h>
#include <conio.h>
main()
{  
  int x, x2, tab;
  
  printf("Digite um numero a ser tabuado: ");
  scanf("%d", &x2);
  for(x=1;x<=10;x++){
   tab=x2*x;
   printf("\n%d", tab);
}
  getche();
}

