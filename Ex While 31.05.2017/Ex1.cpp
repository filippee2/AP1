#include <stdio.h>
#include <conio.h>
main()
{
	int num;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	while(num!=0){
		printf("Digite um numero: ");
		scanf("%d", &num);
	}
	printf("Sistema encerrado");
	getche();
}
