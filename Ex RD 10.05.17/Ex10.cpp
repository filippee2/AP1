#include <stdio.h>
#include <conio.h>
main()
{  
  int x, cont=0, valor;

  for(x=1;x<=10;x++){
   printf("\nDigite um valor: ");
   scanf("%d", &valor);
   if(valor<0){
    cont++;
}
}
  printf("\nQuantidade de numeros negativos: %d", cont);
  getche();
}

