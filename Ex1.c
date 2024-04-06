#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct st_lembrete {
  char horario[20];
  char data[20];
  char compromisso[150];
};

int main()
{
  struct st_lembrete compromisso;

  printf("Qual sera o horario de seu compromisso? \n");
  fgets(compromisso.horario, 20, stdin);

  printf("Digite qual sera a data deste compromisso: \n");
  fgets(compromisso.data, 20, stdin);

  printf("Descreva o o compromisso: \n");
  fgets(compromisso.compromisso, 150, stdin);

    compromisso.horario[strcspn(compromisso.horario, "\n")] = '\0';
    compromisso.data[strcspn(compromisso.data, "\n")] = '\0';
    compromisso.compromisso[strcspn(compromisso.compromisso, "\n")] = '\0';

  printf("========== DADOS DO COMPROMISSO ==========\n");
  printf("%s as %s do dia %s", compromisso.compromisso, compromisso.horario, compromisso.data);

  return 0;
}
