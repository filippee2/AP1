#include <stdio.h>
#include <conio.h>
main()
{
	int financiamento;
	float valorVeiculo, valorParcelado;
	
	printf("Digite o numero de vezes do financiamento: ");
	scanf("%d", &financiamento);
	while(financiamento!=36 && financiamento!=48){
		printf("So e permitido 36 ou 48 vezes");
		printf("\nDigite o numero de vezes do financiamento: ");
		scanf("%d", &financiamento);
	}
	printf("\nDigite o valor total do veiculo: ");
	scanf("%f", &valorVeiculo);
	valorParcelado=valorVeiculo/financiamento;
	printf("\nO financiamento sera de %d X %.2f", financiamento, valorParcelado);
	getche();
}
