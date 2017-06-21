#include <stdio.h>
#include <conio.h>
main()
{
	int VetorA[10];
	int VetorB[10];
	int i;
	int Multiplicacao[10];
		
		for(i=0; i<10; i++)
		{
			printf("\nVetor[%i]: ", i);
			scanf("%i", &VetorA[i]);
		}
		for(i=0; i<10; i++)
		{
			printf("\nVetor[%i]: ", i);
			scanf("%i", &VetorB[i]);
		}
		for(i=0; i<10; i++)
		{
			Multiplicacao[i]=VetorA[i]*VetorB[i];
		}
		for(i=0; i<10; i++)
		{
			printf("\n%i", Multiplicacao[i]);
		}
}
	
	
