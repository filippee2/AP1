#include <stdio.h>
#include <conio.h>
main()
{
	int num, cont=0, testePI;
	
	do{
		printf("Digite um numero: ");
		scanf("%d", &num);
		testePI=num%2;	
		cont++;
	}while(testePI!=0);
	printf("\nQuantidade de numeros lidos: %d", cont);
	getche();
}
