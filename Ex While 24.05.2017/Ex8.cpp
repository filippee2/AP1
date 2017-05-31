#include <stdio.h>
#include <conio.h>
main()
{
	int senhaDigitada, senhaCorreta=2016;
	
	printf("Digite a senha: ");
	scanf("%d", &senhaDigitada);
	while(senhaDigitada!=senhaCorreta){
		printf("SENHA INVALIDA");
		printf("\nDigite a senha: ");
		scanf("%d", &senhaDigitada);
	}
	printf("\nACESSO PERMITIDO");
	getche();
}

