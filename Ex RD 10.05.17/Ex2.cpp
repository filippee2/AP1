#include <stdio.h>
#include <conio.h>
main()
{  
 int numInt;
 
 printf("----------------------------------");
 printf("\n  ESCREVER UM NUMERO 10 VEZES   ");
 printf("\n--------------------------------");
  printf("\nDigite um numero inteiro: ");
  scanf("%d", &numInt);
 for(int x=1;x<=10;x++){
  printf("\n%d", numInt);
}
 printf("\n--------------------------------");
 printf("\n               FIM              ");
 printf("\n--------------------------------");
  getche();
}

