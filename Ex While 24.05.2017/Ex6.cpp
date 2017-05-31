#include <stdio.h>
#include <conio.h>
main()
{
	int cor;
	
	printf("Escolha uma cor 1-Azul, 2-Preto, 3-Rosa e 4-Vermelho: ");
	scanf("%d", &cor);
	while(cor!=1 && cor!=2 && cor!=3 && cor!=4){
		printf("Digite um numero valido!");
		printf("\nEscolha uma cor 1-Azul, 2-Preto, 3-Rosa e 4-Vermelho: ");
		scanf("%d", &cor);
	}
	getche();
}
