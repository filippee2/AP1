#include <stdio.h>
#include <conio.h>
main()
{  
  int x, quantLidas, numInteiro, testeParImpar, quadrado, cubo;

  printf("Digite a quantidade de numeros inteiros a serem lidos: ");
  scanf("%d", &quantLidas);
  for(x=1;x<=quantLidas;x++){
    printf("\n\nDigite um numero inteiro: ");
    scanf("%d", &numInteiro);
    
    if(numInteiro<0)
    	printf("\nNumero negativo");
    else
    	printf("\nNumero positivo");
    	
    testeParImpar= numInteiro%2;
    
    if(testeParImpar==0)
    	printf("\nNumero par");
    else
    	printf("\nNumero impar");
    quadrado= numInteiro*numInteiro;
    printf("\nO quadrado do valor: %d", quadrado);
    cubo= numInteiro*numInteiro*numInteiro;
    printf("\nO cubo do valor: %d", cubo);
	}
}

