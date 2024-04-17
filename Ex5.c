#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Vetor {
  float x;
  float y;
  float z;
};

struct Vetor somaVetores(struct Vetor v1, struct Vetor v2) {
  struct Vetor resultado;
  resultado.x = v1.x + v2.x;
  resultado.y = v1.y + v2.y;
  resultado.z = v1.z + v2.z;
  return resultado;
}

int main()
{
  struct Vetor vetor1, vetor2, resultado;

  printf("Digite os elementos do primeiro vetor X, Y e Z: \n");
  scanf("%f %f %f", &vetor1.x, &vetor1.y, &vetor1.z);

  printf("Digite os elementos do segundo vetor X, Y e Z: \n");
  scanf("%f %f %f", &vetor2.x, &vetor2.y, &vetor2.z);

  resultado = somaVetores(vetor1, vetor2);

  printf("A soma dos vetores (%.2f %.2f %.2f) e (%.2f %.2f %.2f) eh: (%.2f %.2f %.2f) \n", vetor1.x, vetor1.y, vetor1.z, vetor2.x, vetor2.y, vetor2.z, resultado.x, resultado.y, resultado.z);

  return 0;
}
