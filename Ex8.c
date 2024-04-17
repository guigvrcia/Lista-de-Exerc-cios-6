#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct registro {
  char nome[50];
  int idade;
  char sexo;
  char cpf[15];
  char data_nascimento[10];
  char codsetor[100][3];
  char cargo[30];
  char salario[15];
};

int main()
{
  struct registro fnc;

  printf("Por favor, digite o seu nome: \n");
  fgets(fnc.nome, 50, stdin);

  printf("Por favor, digite sua idade: \n");
  scanf("%d", &fnc.idade);
  getchar();

  printf("Por favor, digite seu sexo. 'M' para masculino e 'F' para feminino. \n");
  scanf(" %c", &fnc.sexo);
  getchar();

  printf("Por favor, digite seu CPF: \n");
  scanf("%s", fnc.cpf);
  getchar();

  printf("Por favor, digite sua data de nascimento no formato dd/mm/aaaa: \n");
  fgets(fnc.data_nascimento, 10, stdin);
  getchar();

  printf("Por favor, digite o codigo de seu setor: \n");
  scanf("%s", fnc.codsetor[0]);
  getchar();

  printf("Por favor, digite o seu cargo: \n");
  fgets(fnc.cargo, 30, stdin);

  printf("Por favor, digite o seu salario: \n");
  fgets(fnc.salario, 15, stdin);

  printf("\n========== FICHA CADASTRAL DO FUNCIONARIO ==========\n");
  printf("\nNome: %s", fnc.nome);
  printf("\nIdade: %d", fnc.idade);
  printf("\nSexo: %c", fnc.sexo);
  printf("\nCPF: %s", fnc.cpf);
  printf("\nData de nascimento: %s", fnc.data_nascimento);
  printf("\nCodigo do setor: %s", fnc.codsetor[0]);
  printf("\nCargo: %s", fnc.cargo);
  printf("\nSalario: %s", fnc.salario);

  return 0;
}

