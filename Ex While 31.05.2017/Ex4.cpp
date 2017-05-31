#include <stdio.h>
#include <conio.h>
main()
{
	int num, x=1;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	while(x<=num){
		printf("\n%d", x);
		x++;
	}
	getche();
}
