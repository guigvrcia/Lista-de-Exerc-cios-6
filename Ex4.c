#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct st_curso {
  char matricula[30];
  char nome[100];
  float nota1, nota2, nota3;
  float media;
};

int main()
{
  struct st_curso aluno[5];
  float maiornota1 = 0, maiormediageral = 0, menormediageral = 10;
  int indice_maior = 0, indice_menor = 0;

  for(int i = 0; i < 5; i++) {
    printf("Digite o numero de matricula do aluno %d: ", i + 1);
    fgets(aluno[i].matricula, 30, stdin);

    printf("Digite o nome do aluno %d: ", i + 1);
    fgets(aluno[i].nome, 100, stdin);

    printf("Digite a nota da 1 prova do aluno %d: ", i + 1);
    scanf("%f", &aluno[i].nota1);
    getchar();

    printf("Digite a nota da 2 prova do aluno %d: ", i + 1);
    scanf("%f", &aluno[i].nota2);
    getchar();

    printf("Digite a nota da 3 prova do aluno %d: ", i + 1);
    scanf("%f", &aluno[i].nota3);
    getchar();

    aluno[i].media = (aluno[i].nota1 + aluno[i].nota2 + aluno[i].nota3) / 3;

    if(aluno[i].nota1 > maiornota1) {
      maiornota1 = aluno[i].nota1;
    }
    if (aluno[i].media > maiormediageral) {
      maiormediageral = aluno[i].media;
      indice_maior = i;
    }
    if(aluno[i].media < menormediageral) {
      menormediageral = aluno[i].media;
      indice_menor = i;
    }
    if(aluno[i].media >= 6.0) {
      printf("O aluno %s foi aprovado com media %.2f. Parabens!\n", aluno[i].nome, aluno[i].media);
    } else {
      printf("O aluno %s foi reprovado com media %.2f. Que pena, estude mais!\n", aluno[i].nome, aluno[i].media);
    }
  }
  printf("A maior nota na prova 1 pertence a %s, com %.2f\n", aluno[0].nome, maiornota1);
  printf("A maior media geral pertence a %s, com %.2f\n", aluno[indice_maior].nome, maiormediageral);
  printf("A menor media geral pertence a %s, com %.2f\n", aluno[indice_menor].nome, menormediageral);

  return 0;
}
