#include <stdio.h>
#include <conio.h>
main()
{
	int num, cont=0, soma=0;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	soma=num;
	do{
		soma=soma+cont;
		cont++;
	}while(cont!=num);
	printf("%d", soma);
	getche();
}
