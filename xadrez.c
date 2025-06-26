#include <stdio.h>

int main() {
    //Declaração e inicialização das variáveis.
    int movimentoTorre = 1, movimentoBispo = 1, movimentoRainha = 1, movimentoCavalo = 1;

    //Loop for para o movimento da Torre.
    for (movimentoTorre; movimentoTorre <= 5; movimentoTorre++){
        printf("Torre se moveu uma casa para a direita.\n");
    }

    //Loop while para o movimento do Bispo.
    while (movimentoBispo <= 5){
        printf("Bispo se moveu uma casa na diagonal cima/direita.\n");
        movimentoBispo++;
    }

    //Loop do-while para o movimento da Rainha.
    do{
        printf("Rainha se moveu uma casa para a esquerda.\n");
        movimentoRainha++;
    }while (movimentoRainha <= 8);

    //Loop aninhado para o movimento do Cavalo.
    while (movimentoCavalo--){
        for (int i = 1; i <= 2; i++){
            printf("Cavalo se moveu uma casa para baixo.\n");
        }
        printf("Cavalo se moveu uma casa para a esquerda.\n");
    }

    return 0;
}
