#include <stdio.h>
#include <conio.h>
main()
{
	int num, contZeros=0, acumulador;
	
	do{
		printf("Digite um numero: ");
		scanf("%d", &num);
		if(num==0){
			contZeros++;
		}
		acumulador=acumulador+num;
	}while(num>=0);
	printf("\nA soma dos numeros positivos e: %d e a quantidade de zeros foi de: %d", acumulador, contZeros);
	getche();
}
