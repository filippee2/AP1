#include <stdio.h>
#include <conio.h>
main()
{  
  int x, idade, medIdade=0;

  for(x=1;x<=8;x++){
  	printf("Digite a idade do individuo: ");
  	scanf("%d", &idade);
  	medIdade= medIdade + idade;
	}
  medIdade= medIdade/8;	
  printf("A media das idades e: %d ", medIdade);
  getche();
}

