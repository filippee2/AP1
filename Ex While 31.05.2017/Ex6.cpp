#include <stdio.h>
#include <conio.h>
main()
{
	int senha;
	
	printf("Digite a senha: ");
	scanf("%d", &senha);
	do{
		printf("Digite a senha: ");
		scanf("%d", &senha);
	}while(senha!=123);
	getche();
}
