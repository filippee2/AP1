#include <stdio.h>
#include <conio.h>
main()
{
	int Vetor[30];
	int i;
	int Numero=0;
		
	for(i=0;i<30;i++){
		printf("Digite um numero: ");
		scanf("%i",&Numero);
		Vetor[i]=Numero;
	}
	printf("\n");
	for(i=0;i<30;i++){
		if(Vetor[i]>0){
			printf("\nVetor[%i]= %i",i,Vetor[i]);
		}
	}
	getche();
}
