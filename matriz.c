#include <stdio.h>

int main() {
    int matriz[4][4];
    int i, j;
    int soma_diagonal_secundaria = 0;
    int soma_linhas_pares = 0;
    int soma_linhas_impares = 0;
    float media_linhas_pares;
    float media_linhas_diagonais;

    // Leitura da matriz
    printf("Digite os elementos da matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Calculando a soma da diagonal secundária
    for (i = 0; i < 4; i++) {
        soma_diagonal_secundaria += matriz[i][3 - i];
    }

    // Calculando a soma das linhas pares e ímpares e média das linhas pares
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (i % 2 == 0) {
                soma_linhas_pares += matriz[i][j];
            } else {
                soma_linhas_impares += matriz[i][j];
            }
        }
    }
    media_linhas_pares = soma_linhas_pares / 2.0;

    // Calculando a média das linhas diagonais
    media_linhas_diagonais = (matriz[0][0] + matriz[1][1] + matriz[2][2] + matriz[3][3]
                             + matriz[0][3] + matriz[1][2] + matriz[2][1] + matriz[3][0]) / 8.0;

    // Exibindo os resultados
    printf("\nResultados:\n");
    printf("a. Soma da diagonal secundaria: %d\n", soma_diagonal_secundaria);
    printf("b. Soma das linhas pares: %d\n", soma_linhas_pares);
    printf("c. Soma das linhas impares: %d\n", soma_linhas_impares);
    printf("d. Media das linhas pares: %.2f\n", media_linhas_pares);
    printf("e. Media das linhas diagonais: %.2f\n", media_linhas_diagonais);

    return 0;
}
