#include <stdio.h>

/* Preencha uma matriz 3x3 e mostre a soma dos
números da diagonal. */

int main() {
    int linha, coluna, soma, numeros[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    soma = 0;
    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            //printf("Posição [%d] [%d] = %d\n", linha, coluna, numeros[linha][coluna]);
            if (linha == coluna) {
                soma = soma + numeros[linha][coluna];
            }
        }
    }
    printf("\n");

    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            printf("%d \t", numeros[linha][coluna]);
        }
        printf("\n");
    }

    printf("A soma dos números da diagonal é: %d", soma);
}
