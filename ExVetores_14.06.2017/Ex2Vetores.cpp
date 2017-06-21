#include <stdio.h>
#include <conio.h>
main()
{
	int Vetor[20];
	int Cont=0;
	int i;
	
	for(i=0; i<20; i++)
	{
		printf("\nVetor[%i]: ", i);
		scanf("%i", &Vetor[i]);
		
		if(Vetor[i]%2==0)
			Cont++;
	}
	printf("Numeros pares: %i", Cont);
}
	
	
