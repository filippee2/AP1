#include <stdio.h>
#include <conio.h>
main()
{
	int Vetor[10];
	int i;
	int Acumulador=0;
	
	for(i=0; i<10; i++)
	{
		printf("\nVetor[%i]: ", i);
		scanf("%i", &Vetor[i]);
		
		if(Vetor[i]==0 || Vetor[i]<0)
			break;
		if(Vetor[i]>=5)
			Acumulador=Acumulador+Vetor[i];
	}
	printf("Soma dos vetores %i", Acumulador);
}
	
	
