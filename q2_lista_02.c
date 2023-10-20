#include <stdio.h>
#include <string.h>
// PERGUNTAR PARA O PROFFESSOR

struct Jogador{
    char nome[31];
    char posicao;
    int forca;
};

float calcularForca(struct Jogador jogadores[11]){
    int G = 0, L = 0, Z = 0, V = 0, M = 0, A = 0;
    for(int i = 0; i < 11; i++){
        switch(jogadores[i].posicao){
            case 'G':
                G += jogadores[i].forca;
                break;
            case 'L':
                L += jogadores[i].forca;
                break;
            case 'Z':
                Z += jogadores[i].forca;
                break;
            case 'V':
                V += jogadores[i].forca;
                break;
            case 'M':
                M += jogadores[i].forca;
                break;
            case 'A':
                A += jogadores[i].forca;
                break;
            default:
                break;
        }
    }
    return(8 * G + 10 * L + 5 * Z + 8 * V + 11 * M + 12 * A) / 100.0;
}

int main(){
    struct Jogador time1[11], time2[11];
    char nomeTime1[31], nomeTime2[31];

    printf("Digite o nome do primeiro time: ");
    scanf("%30[^\n]", nomeTime1);

    for(int i = 0; i < 11; i++){
        printf("Digite o nome, posição e força do jogador %d do primeiro time (separados por ponto e vírgula): ", i + 1);
        scanf("%30[^;];%c;%d", time1[i].nome, &time1[i].posicao, &time1[i].forca);
    }

    printf("Digite o nome do segundo time: ");
    scanf("%30[^\n]", nomeTime2);

    for(int i = 0; i < 11; i++){
        printf("Digite o nome, posição e força do jogador %d do segundo time (separados por ponto e vírgula): ", i + 1);
        scanf(" %30[^;];%c;%d", time2[i].nome, &time2[i].posicao, &time2[i].forca);
    }

    float forcaTime1 = calcularForca(time1);
    float forcaTime2 = calcularForca(time2);

    if(forcaTime1 > forcaTime2){
        printf("%s eh mais forte %.2f\n", nomeTime1, forcaTime1);
    } else if(forcaTime2 > forcaTime1){
        printf("%s eh mais forte %.2f\n", nomeTime2, forcaTime2);
    } else{
        printf("Os times têm forças iguais com força ponderada %.2f\n", forcaTime1);
    }

    return 0;
}
