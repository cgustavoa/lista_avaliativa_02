#include <stdio.h>

float calcularForca(int forcas[]){
    return(8 * forcas[0] + 10 * (forcas[1] + forcas[2]) + 5 * (forcas[3] + forcas[4]) + 8 * (forcas[5] + forcas[6]) + 11 * (forcas[7] + forcas[8]) + 12 * (forcas[9] + forcas[10])) / 100.0;
}

int main(){
   
    int forcasTime1[11] = {0}, forcasTime2[11] = {0};
    char nomeTime1[31], nomeTime2[31];
    char nomeJogador[31], posicaoJogador;
    int forcaJogador;

    scanf("%30[^\n]", nomeTime1);

    for(int i = 0; i < 11; i++){
        scanf("%30[^;];%c;%d", nomeJogador, &posicaoJogador, &forcaJogador);

        int posicao = (posicaoJogador == 'L') ? (forcasTime1[1] == 0) ? 1 : 2 : 
        (posicaoJogador == 'Z') ? (forcasTime1[3] == 0) ? 3 : 4 : 
        (posicaoJogador == 'V') ? (forcasTime1[5] == 0) ? 5 : 6 : 
        (posicaoJogador == 'M') ? (forcasTime1[7] == 0) ? 7 : 8 : 
        (posicaoJogador == 'A') ? (forcasTime1[9] == 0) ? 9 : 10 : 0;

        if(forcasTime1[posicao] == 0)
            forcasTime1[posicao] = forcaJogador;
    }

    scanf(" %30[^\n]", nomeTime2);

    for(int i = 0; i < 11; i++){
        scanf(" %30[^;]; %c; %d", nomeJogador, &posicaoJogador, &forcaJogador);

        int posicao = (posicaoJogador == 'L') ? (forcasTime2[1] == 0) ? 1 : 2 : 
        (posicaoJogador == 'Z') ? (forcasTime2[3] == 0) ? 3 : 4 : 
        (posicaoJogador == 'V') ? (forcasTime2[5] == 0) ? 5 : 6 : 
        (posicaoJogador == 'M') ? (forcasTime2[7] == 0) ? 7 : 8 : 
        (posicaoJogador == 'A') ? (forcasTime2[9] == 0) ? 9 : 10 : 0;

        if(forcasTime2[posicao] == 0)
            forcasTime2[posicao] = forcaJogador;
    }

    float forcaTime1 = calcularForca(forcasTime1);
    float forcaTime2 = calcularForca(forcasTime2);

    printf("%s: %.2f de forca\n%s: %.2f de forca\n", nomeTime1, forcaTime1, nomeTime2, forcaTime2);

    if(forcaTime1 > forcaTime2)
        printf("%s eh mais forte\n", nomeTime1);
    else if(forcaTime2 > forcaTime1)
        printf("%s eh mais forte\n", nomeTime2);
    else
        printf("Os times tem a mesma forca\n");

    return 0;
}
