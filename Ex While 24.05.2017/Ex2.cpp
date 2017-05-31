#include <stdio.h>
#include <conio.h>
main()
{
	int num;
	
	printf("\nDigite um numero inteiro: ");
	scanf("%d", &num);
	while(num!=0){
		num--;
		printf("\n%d", num);
	}
	getche();
}
