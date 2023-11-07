#include <stdio.h>

int main() {
    int matrizA[4][4], matrizB[4][4], matrizResultante[4][4];     
    int i, j, k;                                        
    char operacao[5];

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &matrizA[i][j]);
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &matrizB[i][j]);
        }
    }


    scanf("%s", operacao);

    if (strcmp(operacao,"soma")==0)
    {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                matrizResultante[i][j] = matrizA[i][j] + matrizB[i][j];
            }
        }
     }
    else if (strcmp(operacao,"sub")==0)
    {
       for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                matrizResultante[i][j] = matrizA[i][j] - matrizB[i][j];
            }
       }
    }
    else if (strcmp(operacao,"mult")==0)
    {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                matrizResultante[i][j]=0;
                
                for (int k = 0; k < 4; k++) {
                  matrizResultante[i][j] += matrizA[i][k] * matrizB[k][j];
                 }
            }
        }
    }
    
    
    for (int i = 0; i < 4; i++)
    {
      for (int j = 0; j < 4; j++)
      {
         printf("%*d",+4,matrizResultante[i][j]);
      }
      printf("\n");
    }

    return 0;
}
