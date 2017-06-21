#include <stdio.h>
#include <conio.h>
main()
{
	int VetorA[10];
	int X;
	int i;
	int Contador[10];
	int Y=0;
	
	printf("Digite um valor: ");
	scanf("%i", &X);
	
	for(i=0; i<10; i++)
	{
		printf("\nVetor[%i]: ", i);
		scanf("%i", &VetorA[i]);
		if(X==VetorA[i])
	    {
		Contador[Y]=i;
		Y++;
     	}
	}
	for(i=0; i<Y; i++)
	{
		printf("\n%i", Contador[i]);
	}
}
	
	
