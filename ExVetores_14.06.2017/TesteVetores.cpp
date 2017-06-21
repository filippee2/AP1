#include <stdio.h>
#include <conio.h>
main()
{
	int Vet[10];
	int Cont=0;
	int i;
	
	for(i=0; i<10; i++)
	{
		printf("Digite um numero pro vetor [%i]:\n ", i);
		scanf("%i", &Vet[i]);
	}
	
	printf("\nPosiçoes dos numeros pares: ");
	
	for(i=0; i<10; i++)
	{
		if(Vet[i]%2==0)
		{
			Cont++;
			printf("%d\n", i);
		}
	}
	
	printf("\nTotal de numeros pres no vetor: %d", Cont);
	getche();
}
		
