#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct marcasCarros {
  char marca[15];
  int ano;
  float preco;
};

int main()
{

  struct marcasCarros carros[5];
  int i;
  float p;

  for(i = 0; i < 5; i++) {
    printf("Digite a marca do carro %d: \n", i + 1);
    fgets(carros[i].marca, 15, stdin);

    printf("Digite o ano do carro %d: \n", i + 1);
    scanf("%d", &carros[i].ano);
    getchar();

    printf("Digite o preco do carro %d: \n", i + 1);
    scanf("%f", &carros[i].preco);
    getchar();
  }

  do {
    printf("Digite um valor P para exibir os precos de carros com menor valor que P: \n");
    scanf("%f", &p);

    if(p == 0) {
      printf("Programa encerrado.\n");
      break;
    }

    printf("Carros com preco menor do que %.2f: \n", p);
    int encontrou = 0;
    for(i = 0; i < 5; i++) {
      if(carros[i].preco < p) {
        printf("Marca: %s", carros[i].marca);
        printf("Ano: %d\n", carros[i].ano);
        printf("Preco: %.2f\n", carros[i].preco);
        encontrou = 1;
      }
    }
    if(!encontrou) {
      printf("Nao foram encontrar carros com menores precos que P.");
    }
  } while(p != 0);
  
  return 0;
}
