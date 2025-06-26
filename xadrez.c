#include <stdio.h>

//Criando a função recursiva para o movimento da Torre.
void movimentoTorre(int x){
    if (x > 0){
        printf("Torre se moveu uma casa para a direita.\n");
        movimentoTorre(--x);
    }
}

//Criando a função recursiva para o movimento da Rainha.
void movimentoRainha(int x){
    if (x > 0){
        printf("Rainha se moveu uma casa para a esquerda.\n");
        movimentoRainha(--x);
    }
}

int main() {
    //Declaração e inicialização das variáveis.
    int movimentoBispo = 1;

    //Chamando a função recursiva para o movimento da Torre.
    movimentoTorre(5);

    //Loop aninhado para o movimento do Bispo.
    while (movimentoBispo <= 5){
        int i = 1;
        while (i--){
            printf("Bispo se moveu uma casa para cima/");
        }
        printf("direita.\n");
        movimentoBispo++;
    }

    //Chamando a função recursiva para o movimento da Rainha.
    movimentoRainha(8);

    //Loop para o movimento do Cavalo.
    for (int i = 1, j = 1; i <= 2 && j <= 3; i += (i == 2 ? 0 : 1), j++){
        if (i == j){
            printf("Cavalo se moveu uma casa para baixo.\n");
            continue;
        }
        if (i != j){
            printf("Cavalo se moveu uma casa para a esquerda.\n");
            break;
        }
    }

    return 0;
}
