#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct st_alunos {
  char nome[100];
  char matricula[20];
  char curso[50];
};

int main()
{
  struct st_alunos alunos[5];

  for(int i = 0; i < 5; i++)
  {
    printf("Digite o seu nome completo: \n");
    fgets(alunos[i].nome, 100, stdin);

    printf("Digite o seu numero de matricula: \n");
    fgets(alunos[i].matricula, 20, stdin);

    printf("Digite o seu curso: \n");
    fgets(alunos[i].curso, 50, stdin);
  }

  for(int i = 0; i < 5; i++)
  {
    printf("========== ALUNO %d ========== \n", i+1);
    printf("Nome: %s\n", alunos[i].nome);
    printf("Matricula: %s\n", alunos[i].matricula);
    printf("Curso: %s\n", alunos[i].curso);
  }

  return 0;
}
