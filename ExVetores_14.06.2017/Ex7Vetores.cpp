                        #include <stdio.h>
#include <conio.h>
main()
{
	int VetorPar[10];
	int VetorImpar[10];
	int i;
	int x=0;
	int y=0;
	int Numero=0;
		
	for(i=0; i<=20; i++)
	{
		printf("Digite um numero: ");
		scanf("%i", &Numero);
		
		if((Numero==0) || (x==10) || (y==10))
			break;
			
		if(Numero%2==0)
		{
			VetorPar[x]=Numero;
			x++;
		}
		
		if(Numero%2==1)
		{
			VetorImpar[y]=Numero;
			y++;
		}
	}
	for(i=0; i<x; i++){
		printf("VetorPar[%i]: %i\n", i, VetorPar[i]);
	}
	for(i=0; i<y; i++){
		printf("VetorImpar[%i]: %i\n", i, VetorImpar[i]);
	}
	getche();
}
