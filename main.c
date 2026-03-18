#include <stdio.h>

// variável global para contar movimentos
int movimentos = 0;

// cores ANSI
#define RESET   "\033[0m"
#define VERMELHO "\033[31m"
#define VERDE    "\033[32m"
#define AMARELO  "\033[33m"
#define AZUL     "\033[34m"
#define MAGENTA  "\033[35m"
#define CIANO    "\033[36m"

// função para selecionar cor baseada no número do disco
const char* get_cor_disco(int disco) {
    int cor_index = (disco - 1) % 6;  // alterna entre 6 cores
    
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

// função recursiva para resolver a Torre de Hanói
void hanoi(int n, char origem, char destino, char auxiliar) {
    if (n == 1) {
        printf("%sMover disco 1 de %c para %c%s\n", get_cor_disco(1), origem, destino, RESET);
        movimentos++;
        return;
    }

    // move n-1 discos para o pino auxiliar
    hanoi(n - 1, origem, auxiliar, destino);

    // move o maior disco para o destino
    printf("%sMover disco %d de %c para %c%s\n", get_cor_disco(n), n, origem, destino, RESET);
    movimentos++;

    // move os n-1 discos do auxiliar para o destino
    hanoi(n - 1, auxiliar, destino, origem);
}

int main() {
    int n;

    // pede ao usuário o número de discos
    printf("Digite o número de discos: ");
    scanf("%d", &n);

    // chama a função para resolver
    hanoi(n, 'A', 'C', 'B');

    // mostra o total de movimentos
    printf("\nTotal de movimentos: %d\n", movimentos);

    return 0;
}
