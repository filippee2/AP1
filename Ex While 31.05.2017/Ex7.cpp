#include <stdio.h>
#include <conio.h>
main()
{
	int codigo, cont, maisCaro, maisBarato=5000000000000;
	float preco, media, precoMaior=0, precoMenor;
	
	do{
		printf("Digite o codigo do produto: ");
		scanf("%d", &codigo);
		printf("Digite o preco do produto: ");
		scanf("%f", &preco);
		media=media+preco;
		cont++;
		if(preco>precoMaior){
			maisCaro=codigo;
			precoMaior=preco;
		}
		if(preco<maisBarato){
			maisBarato=codigo;
			precoMenor=preco;
		}
	}while(codigo!=100);
	media=media/cont;
	printf("Media de preco: %.2f", media);
	printf("\nO produto mais caro: %d", maisCaro);
	printf("\nO produto mais barato: %d", maisBarato);
	getche();
}

