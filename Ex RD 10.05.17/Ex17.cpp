#include <stdio.h>
#include <conio.h>
main()
{
 int x, numCarnes;
 float valorFinal=0, valor;
 
 printf("Digite o numero de carnes: ");
 scanf("%d", &numCarnes);
 
 for(x=1;x<=numCarnes;x++)
 {
  printf("Digite o valor do carne %d: ", x);
  scanf("%f", &valor);
  valorFinal=valor+valorFinal;
 }
 printf("Valor a ser pago pelo cliente: %.2f", valorFinal);
 getche();
}

