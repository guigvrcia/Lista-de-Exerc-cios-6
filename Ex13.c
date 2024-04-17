#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct dadosPessoais {
  char nome[50];
  char endereco[100];
  char data_nasc[15];
  char cidade[15];
  char cep[9];
  char email[50];
};

bool verificarData(char data[]) {
  int dia, mes, ano;
  if(sscanf(data, "%d/%d/%d", &dia, &mes, &ano) != 3) {
    return false;
  }
  if(dia < 1 || dia > 31 || mes < 1 || mes > 12 || ano < 1900 || ano > 2024) {
    return false;
  } else {
    return true;
  }
}

bool verificarCEP(char cep[]) {
  int i;
  for(i = 0; i < 8; i++) {
  if(cep[i] < '0' || cep[i] > '9') {
      return false;
    } else {
      return true;
    }
  }
}

bool verificarEmail(char email[]) {
  int i, arroba = 0, ponto = 0;
  for(i = 0; email[i] != '\0'; i++) {
    if(email[i] == '@') {
      arroba++;
    } else if(email[i] == '.') {
      ponto++;
    } else {
      continue;
    }
  }
  if(arroba == 1 && ponto >= 1 && i > 2 && email[i-1] != '.' && email[i-2] != '.') {
    return true;
  } else {
    return false;
  }
}

int main() {

  struct dadosPessoais pessoa;

  printf("Digite seu nome completo: \n");
  fgets(pessoa.nome, 50, stdin);

  printf("Digite o seu endereco: \n");
  fgets(pessoa.endereco, 100, stdin);

  printf("Digite a sua data de nascimento. Formato DD/MM/AAAA: \n");
  fgets(pessoa.data_nasc, 15, stdin);

  printf("Digite a sua cidade: \n");
  fgets(pessoa.cidade, 15, stdin);

  printf("Digite o seu CEP: \n");
  fgets(pessoa.cep, 9, stdin);
  getchar();

  printf("Digite o seu e-mail: \n");
  fgets(pessoa.email, 50, stdin);

  if(!verificarData(pessoa.data_nasc)) {
    printf("Data de nascimento invalida!\n");
  }
  if(!verificarCEP(pessoa.cep)){
    printf("CEP invalido!\n");
  }
  if(!verificarEmail(pessoa.email)){
    printf("E-mail invalido!\n");
  }

  printf("\nFICHA CADASTRAL:\n");
  printf("Nome: %s", pessoa.nome);
  printf("Endereco: %s", pessoa.endereco);
  printf("Data de nascimento: %s", pessoa.data_nasc);
  printf("Cidade: %s", pessoa.cidade);
  printf("CEP: %s", pessoa.cep);
  printf("E-mail: %s", pessoa.email);

  return 0;
}
