#include <stdio.h>
#include <conio.h>
main()
{
 int x, idade, laco, idadeMaiorNota=0, idadeAlunoVelho=0;
 float nota, maiorNota=0, notaAlunoVelho=0;
 
 printf("Digite a quantidade de la�os que voce quer fazer: ");
 scanf("%d", &laco);
 for(x=1;x<=laco;x++)
 {
  printf("Digite a nota do aluno: ");
  scanf("%f", &nota);
  printf("Digite a idade do aluno: ");
  scanf("%d", &idade);
  if(nota>maiorNota)
  {
   maiorNota=nota;
   idadeMaiorNota=idade;
  }
  if(idade>idadeAlunoVelho)
  {
   notaAlunoVelho=nota;
   idadeAlunoVelho=idade;
  }
}
 printf("\nA idade do aluno que obteve maior nota: %d", idadeMaiorNota);
 printf("\nA nota do aluno mais velho: %.2f", notaAlunoVelho);
 getche();
}

