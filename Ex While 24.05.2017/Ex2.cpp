#include <stdio.h>
#include <conio.h>
main()
{
	char teclas;
	
	fflush(stdin);
	do{
		printf("Digite uma letra: ");
		scanf("%c", &teclas);
		fflush(stdin);
	}while(teclas!='w');
	getche();
}
