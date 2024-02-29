#include <stdio.h>

#define MAX_ELEMENTOS 12

int main() {
    int numeros[MAX_ELEMENTOS];
    int vetpar[MAX_ELEMENTOS], vetimpar[MAX_ELEMENTOS];
    int i, j = 0, k = 0;

    // Lendo os números digitados pelo usuário
    printf("Digite os %d numeros inteiros:\n", MAX_ELEMENTOS);
    for (i = 0; i < MAX_ELEMENTOS; i++) {
        scanf("%d", &numeros[i]);
    }

    // Separando os números em pares e ímpares
    for (i = 0; i < MAX_ELEMENTOS; i++) {
        if (numeros[i] % 2 == 0) {
            vetpar[j++] = numeros[i];
        } else {
            vetimpar[k++] = numeros[i];
        }
    }

    // Apresentando os números pares
    printf("\nNumeros pares:\n");
    for (i = 0; i < j; i++) {
        printf("%d ", vetpar[i]);
    }

    // Apresentando os números ímpares
    printf("\nNumeros impares:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", vetimpar[i]);
    }

    return 0;
}
