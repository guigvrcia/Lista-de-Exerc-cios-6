#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_CARTAS_POR_JOGADOR 5
#define NUM_JOGADORES 2

// Definição da struct para representar uma carta
struct Carta {
    char valor;
    char naipe;
};

// Definição da struct para representar um jogador
struct Jogador {
    struct Carta mao[NUM_CARTAS_POR_JOGADOR];
};

int main() {
    // Array de naipes e valores das cartas
    char naipes[] = {'P', 'O', 'C', 'E'};
    char valores[] = {'2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K', 'A'};
    
    // Baralho de cartas
    struct Carta baralho[52];
    
    // Inicializar o baralho com todas as cartas
    int index = 0;
    for (int v = 0; v < 13; v++) {
        for (int n = 0; n < 4; n++) {
            baralho[index].valor = valores[v];
            baralho[index].naipe = naipes[n];
            index++;
        }
    }
    
    // Embaralhar o baralho
    srand(time(NULL));
    for (int i = 0; i < 52; i++) {
        int randomIndex = rand() % 52;
        struct Carta temp = baralho[i];
        baralho[i] = baralho[randomIndex];
        baralho[randomIndex] = temp;
    }
    
    // Distribuir cartas para os jogadores
    struct Jogador jogadores[NUM_JOGADORES];
    
    index = 0;
    for (int j = 0; j < NUM_JOGADORES; j++) {
        for (int c = 0; c < NUM_CARTAS_POR_JOGADOR; c++) {
            jogadores[j].mao[c] = baralho[index];
            index++;
        }
    }
    
    // Exibir as cartas dos jogadores
    for (int j = 0; j < NUM_JOGADORES; j++) {
        printf("Cartas do Jogador %d:\n", j + 1);
        for (int c = 0; c < NUM_CARTAS_POR_JOGADOR; c++) {
            printf("%c%c ", jogadores[j].mao[c].valor, jogadores[j].mao[c].naipe);
        }
        printf("\n");
    }
    
    return 0;
}
