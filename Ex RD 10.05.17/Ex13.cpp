#include <stdio.h>
#include <conio.h>
main()
{  
  int x, codigoAluno, acumuladorCod=0;
  float acumuladorAlt=0, altura;

  for(x=1;x<=10;x++){
    printf("Digite o codigo do aluno: ");
    scanf("%d", &codigoAluno);
    printf("Digite a altura do aluno: ");
    scanf("%f", &altura);
    if(altura>acumuladorAlt){
    	acumuladorAlt=altura;
    	acumuladorCod=codigoAluno;
	}
}
  printf("O aluno %d possui e o mais alto com: %.2f metros", acumuladorCod, acumuladorAlt);
  getche();
}

