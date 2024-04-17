#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char nome[50];
  char matricula[10];
  float mediafinal;
} Aluno;

int main()
{
  Aluno alunos[5];

  printf("Digite nome, matricula e media final de todos os 10 alunos: \n");
  for(int i = 0; i < 5; i++) {
    printf("Digite o nome do %d aluno: ", i + 1);
    fgets(alunos[i].nome, 50, stdin);

    printf("Digite o numero de matricula do %d aluno: ", i + 1);
    fgets(alunos[i].matricula, 10, stdin);

    printf("Digite a media final do %d aluno: ", i + 1);
    scanf("%f", &alunos[i].mediafinal);
    getchar();
  }
  printf("Os alunos aprovados foram: \n");
  for(int i = 0; i < 5; i++) {
    if(alunos[i].mediafinal >= 6) {
      printf("Nome: %s\n", alunos[i].nome);
      printf("Matricula: %s\n", alunos[i].matricula);
      printf("Media final: %.2f\n", alunos[i].mediafinal);
    }
  }

  printf("Os alunos reprovados foram: \n");
  for(int i = 0; i < 5; i++) {
    if(alunos[i].mediafinal < 6) {
      printf("Nome: %s\n", alunos[i].nome);
      printf("Matricula: %s\n", alunos[i].matricula);
      printf("Media final: %.2f\n", alunos[i].mediafinal);
    }
  }
  return 0;
}
