#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct local {
  char nome[100];
  char endereco[100];
  char phone[15];
} Pessoa;

int main()
{
  Pessoa pessoas[5];
  int i, j;
  Pessoa temp;

  for(i = 0; i < 5; i++) {
    printf("Digite o nome da pessoa %d:", i + 1);
    fgets(pessoas[i].nome, 100, stdin);
    
    printf("Digite o endereco da pessoa %d: ", i + 1);
    fgets(pessoas[i].endereco, 100, stdin);

    printf("Digite o telefone da pessoa %d: ", i + 1);
    fgets(pessoas[i].phone, 15, stdin);
  }

  for(i = 0; i < 5 - 1; i++) {
    for(j = 0; j < 5 - 1; j++) {
      if(strcmp(pessoas[j].nome, pessoas[j + 1].nome) > 0) {
        strcpy(temp.nome, pessoas[j].nome);
        strcpy(temp.endereco, pessoas[j].endereco);
        strcpy(temp.phone, pessoas[j].phone);

        strcpy(pessoas[j].nome, pessoas[j + 1].nome);
        strcpy(pessoas[j].endereco, pessoas[j + 1].endereco);
        strcpy(pessoas[j].phone, pessoas[j + 1].phone);

        strcpy(pessoas[j + 1].nome, temp.nome);
        strcpy(pessoas[j + 1].endereco, temp.endereco);
        strcpy(pessoas[j + 1].phone, temp.phone);
      }
    }
  }

  printf("A listagem em ordem alfabetica fica: \n");
  for(i = 0; i < 5; i++) {
    printf("Nome: %s\n", pessoas[i].nome);
    printf("Endereco: %s\n", pessoas[i].endereco);
    printf("Telefone: %s\n", pessoas[i].phone);
  }

  return 0;
}

  
