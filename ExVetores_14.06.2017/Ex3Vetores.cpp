#include <stdio.h>
#include <conio.h>
main()
{
	int Vetor[30];
	int MenorElemento;
	int i;
	
	for(i=0; i<30; i++)
	{
		printf("\nVetor[%i]: ", i);
		scanf("%i", &Vetor[i]);
		
		if(Vetor[i]<MenorElemento || i==0)
			MenorElemento=Vetor[i];
	}
	printf("O menor elemento foi: %d", MenorElemento);
}
	
	
