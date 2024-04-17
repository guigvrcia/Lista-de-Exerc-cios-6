#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct vet_alunos {
  char matricula[30];
  char nome[50];
  char coddisc[30];
  float nota1, nota2;
  float ponderada;
};

#define peso1  1.00
#define peso2  2.00

int main()
{
  struct vet_alunos alunos[10];
  int i;

  for(int i = 0; i < 10; i++) {
    printf("Digite o numero de matricula do aluno %d: ", i + 1);
    fgets(alunos[i].matricula, 30, stdin);

    printf("Digite o nome do aluno %d:\n", i + 1);
    fgets(alunos[i].nome, 50, stdin);

    printf("Digite o codigo da disciplina:\n");
    fgets(alunos[i].coddisc, 30, stdin);

    printf("Digite a nota 1 do aluno %d:\n", i + 1);
    scanf("%f", &alunos[i].nota1);

    printf("Agora, digite a nota 2 do aluno %d:\n", i + 1);
    scanf("%f", &alunos[i].nota2);


    alunos[i].ponderada = (alunos[i].nota1 * peso1 + alunos[i].nota2 * peso2) / (peso1 + peso2);

    while (getchar() != '\n');
  }
    printf("\nListagem final dos alunos: \n");
    for(i = 0; i < 10; i++) {
    printf("Aluno %d - Matricula: %s. \t Nome: %s. \tCodigo da Disciplina: %s. \tNota 1: %.2f. \tNota 2: %.2f. \tMedia Ponderada: %.2f\n", i + 1, alunos[i].matricula, alunos[i].nome, alunos[i].coddisc, alunos[i].nota1, alunos[i].nota2, alunos[i].ponderada);
    }
    return 0;
}
