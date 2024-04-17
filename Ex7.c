#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct PolarCord {
  double r;
  double a;
};

struct CartesianoCord {
  double x;
  double y;
};

struct CartesianoCord polarCartesiano(struct PolarCord polar) {
  struct CartesianoCord cartesiano;
  cartesiano.x = polar.r * cos(polar.a);
  cartesiano.y = polar.r * sin(polar.a);
  return cartesiano;
};

int main()
{
  struct PolarCord pontoPolar;
  struct CartesianoCord pontoCartesiano;

  printf("Digite o raio (r) em coordenadas polares: \n");
  scanf("%lf", &pontoPolar.r);

  printf("Digite o argumento (a) em radianos: \n");
  scanf("%lf", &pontoPolar.a);

  pontoCartesiano = polarCartesiano(pontoPolar);

  printf("As coordenadas cartesianas X e Y: (%lf, %lf)\n", pontoCartesiano.x, pontoCartesiano.y);

  return 0;
}
