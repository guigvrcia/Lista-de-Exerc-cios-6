#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dadosLivros {
  char titulo[30];
  char autor[15];
  int ano;
};

int main() {

  struct dadosLivros livro[5];
  int i;

  printf("Informe os dados dos 5 livros: \n");
  for(i = 0; i < 5; i++) {
    printf("Livro %d\n", i + 1);
    printf("Titulo: ");
    fgets(livro[i].titulo, 30, stdin);
    livro[i].titulo[strcspn(livro[i].titulo, "\n")] = '\0';

    printf("Autor: ");
    fgets(livro[i].autor, 15, stdin);
    livro[i].autor[strcspn(livro[i].autor, "\n")] = '\0';

    printf("Ano: ");
    scanf("%d", &livro[i].ano);
    getchar();
  }

  char buscar[30];
  printf("\nDigite o titulo da obra que deseja buscar: ");
  fgets(buscar, 30, stdin);
  buscar[strcspn(buscar, "\n")] = '\0';

  int encontrou = 0;
  for(i = 0; i < 5; i++) {
    if(strcmp(livro[i].titulo, buscar) == 0) {
      printf("Titulo: %s | Autor: %s | Ano: %d\n", livro[i].titulo, livro[i].autor, livro[i].ano);
      encontrou = 1;
    }
  }
  if(!encontrou) {
    printf("Livro nao encontrado!\n");
  }
  return 0;
}
