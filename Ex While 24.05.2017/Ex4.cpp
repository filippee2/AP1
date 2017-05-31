#include <stdio.h>
#include <conio.h>
main()
{
	float num, segundoNum, divide;
	
	printf("Digite um numero: ");
	scanf("%f", &num);
	while(num<0){
		printf("Digite um numero: ");
		scanf("%f", &num);
	}
	printf("Digite outro numero: ");
	scanf("%f", &segundoNum);
	while(segundoNum<num){
		printf("Digite outro numero: ");
		scanf("%f", &segundoNum);
	}
	divide=num/segundoNum;
	printf("A divisao dos dois numeros e: %.2f", divide);
	getche();
}

