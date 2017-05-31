#include <stdio.h>
#include <conio.h>
main()
{
	int num, x=0, tabuada;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	do{
		x++;
		tabuada=num*x;
		printf("\n%d X %d = %d", num, x, tabuada);
	}while(x<=9);
	getche();
}
