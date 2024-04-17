#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct st_cadastro {
  char nome[100];
  int idade;
  char endereco[200];
};

int main()
{
  struct st_cadastro form;

  printf("Digite o seu nome completo: \n");
  fgets(form.nome, 100, stdin);

  printf("Digite a sua idade: \n");
  scanf("%d", &form.idade);
  getchar();

  printf("Digite seu endereco completo: \n");
  fgets(form.endereco, 200, stdin);

  printf("========== FICHA CADASTRAL ========== \n");
  printf("Nome: %s", form.nome);
  printf("Idade: %d\n", form.idade);
  printf("Endereco: %s\n", form.endereco);

  return 0;
}
