#include <stdio.h>

int main() {
    int tamanho = 10;
    int conjunto[10];
    int novoConjunto[10];
    
    for(int i = 0; i < tamanho; i++){
        scanf("%d", &conjunto[i]);

        if(i < tamanho -1){
            printf("%d ", conjunto[i]);
        } else {
            printf("%d", conjunto[i]);
        }
    }

    printf("\n");

    while(tamanho > 1){
        for(int i = 0; i < tamanho; i ++){
            if(i + 1 < tamanho){
                novoConjunto[i] = conjunto[i] + conjunto[i + 1];
            }
        }

        for(int i = 0; i < tamanho -1; i++){
            if(i < tamanho -2){
            printf("%d ", novoConjunto[i]);
        } else {
            printf("%d", novoConjunto[i]);
        }
        }
        printf("\n");

        for(int i = 0; i < tamanho -1; i++){
            conjunto[i] = novoConjunto[i];
        }
        tamanho = (tamanho - 1);
    }
    
    return 0;
}
