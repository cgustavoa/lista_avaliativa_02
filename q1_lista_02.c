#include <stdio.h>

int main() {
    int conjunto[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int novoConjunto[10];
    int tamanho = 10;

    for(int i = 0; i < tamanho; i++){
        printf("%d ", conjunto[i]);
    }

    printf("\n");

    while(tamanho > 1){
        for(int i = 0; i < tamanho; i ++){
            if(i + 1 < tamanho){
                novoConjunto[i] = conjunto[i] + conjunto[i + 1];
            }else{
                novoConjunto[i] = conjunto[i];
            }
        }

        for(int i = 0; i < tamanho -1; i++){
            printf("%d ", novoConjunto[i]);
            
        }
        printf("\n");

        tamanho = (tamanho - 1);
        for(int i = 0; i < tamanho -1; i++){
            conjunto[i] = novoConjunto[i];
        }
    }
    
    return 0;
}
