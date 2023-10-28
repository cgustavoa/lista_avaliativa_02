#include <stdio.h>

int main() {
    int matrizA[4][4], matrizB[4][4], matrizResultante[4][4];     //declaração da matriz e das variaveis
    int i, j, k;                                        
    char soma, sub, mult;

    printf("Digite os valores da primeira matriz:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &matrizA[i][j]);
        }
    }

    printf("Digite os valores da segunda matriz:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &matrizB[i][j]);
        }
    }

    printf("Digite a operação a ser realizada (+, -, *):\n");
    scanf(" %c", &soma, sub, mult);

    switch (soma, sub, mult) {
        case 'soma':
            for (i = 0; i < 4; i++) {
                for (j = 0; j < 4; j++) {
                    matrizResultante[i][j] = matrizA[i][j] + matrizB[i][j];
                }
            }
            break;
        case 'sub':
            for (i = 0; i < 4; i++) {
                for (j = 0; j < 4; j++) {
                    matrizResultante[i][j] = matrizA[i][j] - matrizB[i][j];
                }
            }
            break;
        case 'mult':
            for (i = 0; i < 4; i++) {
                for (j = 0; j < 4; j++) {
                    matrizResultante[i][j] = 0;
                    for (k = 0; k < 4; k++) {
                        matrizResultante[i][j] += matrizA[i][k] * matrizB[k][j];
                    }
                }
            }
            break;
        default:
            printf("Operação inválida.\n");
            return -1;
    }

    printf("Resultado:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", matrizResultante[i][j]);
        }
        printf("\n");
    }

    return 0;
}