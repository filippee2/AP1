#include <stdio.h>
#include <conio.h>
main()
{
	int num, numAntes, divide;
	
	do{
	printf("Digite um numero: ");
	scanf("%d", &num);
	}while(num<0);
	numAntes=num;
	printf("%d", numAntes);
	getche();
}
