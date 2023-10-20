#include <stdio.h>
// PERGUNTAR PARA O PROFFESSOR
int main() {
    int conjunto[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int novoConjunto[10];
    int tamanho = 10;

    for(int i = 0; i < tamanho; i++){
        printf("%d ", conjunto[i]);
    }

    printf("\n");

    while(tamanho > 1){
        for(int i = 0; i < tamanho; i += 2){
            if(i + 1 < tamanho){
                novoConjunto[i / 2] = conjunto[i] + conjunto[i + 1];
            }else{
                novoConjunto[i / 2] = conjunto[i];
            }
        }

        for(int i = 0; i < tamanho / 2; i++){
            printf("%d", novoConjunto[i]);
            if(i < tamanho / 2 - 1){
                printf(" ");
            }
        }
        printf("\n");

        tamanho = (tamanho + 1) / 2;
        for(int i = 0; i < tamanho; i++){
            conjunto[i] = novoConjunto[i];
        }
    }
    
    return 0;
}
