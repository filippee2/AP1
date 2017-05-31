	#include <stdio.h>
	#include <conio.h>
	main()
	{
		int cont=1, num, resultado;
		
		printf("Digite um numero inteiro: ");
		scanf("%d", &num);
		while(num>1){
			num=num/2;
			printf("\nResultado da %d divisao: %d", cont, num);
			cont++;
		}
		getche();
	}
