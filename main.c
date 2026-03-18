#include <stdio.h>

// variável global para contar movimentos
int movimentos = 0;

// função recursiva para resolver a Torre de Hanói
void hanoi(int n, char origem, char destino, char auxiliar) {
    if (n == 1) {
        printf("Mover disco 1 de %c para %c\n", origem, destino);
        movimentos++;
        return;
    }

    // move n-1 discos para o pino auxiliar
    hanoi(n - 1, origem, auxiliar, destino);

    // move o maior disco para o destino
    printf("Mover disco %d de %c para %c\n", n, origem, destino);
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