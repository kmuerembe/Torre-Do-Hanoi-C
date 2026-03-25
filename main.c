#include <stdio.h>

int movimentos = 0;

#define RESET   "\033[0m"
#define VERMELHO "\033[31m"
#define VERDE    "\033[32m"
#define AMARELO  "\033[33m"
#define AZUL     "\033[34m"
#define MAGENTA  "\033[35m"
#define CIANO    "\033[36m"

const char* get_cor_disco(int disco) {
    int cor_index = (disco - 1) % 6;
    switch(cor_index) {
        case 0: return VERMELHO;
        case 1: return VERDE;
        case 2: return AMARELO;
        case 3: return AZUL;
        case 4: return MAGENTA;
        case 5: return CIANO;
        default: return RESET;
    }
}

void hanoi(int n, char origem, char destino, char auxiliar) {
    if (n == 1) {
        printf("%sMover disco 1 de %c para %c%s\n", get_cor_disco(1), origem, destino, RESET);
        movimentos++;
        return;
    }
    hanoi(n - 1, origem, auxiliar, destino);
    printf("%sMover disco %d de %c para %c%s\n", get_cor_disco(n), n, origem, destino, RESET);
    movimentos++;
    hanoi(n - 1, auxiliar, destino, origem);
}

int main() {
    int n;
    printf("Digite o número de discos: ");
    scanf("%d", &n);
    hanoi(n, 'A', 'C', 'B');
    printf("\nTotal de movimentos: %d\n", movimentos);
    return 0;
}
