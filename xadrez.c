#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
    

void moverBispo(int movimentoCompleto)
{
    movimentoCompleto = 5; 

    while (movimentoCompleto--)
    {
        for (int direita = 0; direita < 1; direita++)
        {
            printf("Direita.\n");
        }
        printf("Cima.\n");
    }
    
}

void moverTorre(int casas)
{
    if (casas > 0)
    {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

void moverRainha(int casas)
{
    if (casas > 0)
    {
        printf("Esquerda.\n");
        moverRainha(casas - 1);
    }
}

void moverCavalo(int casas)
{
    int movimentoCompleto = 2; //flag para definir a quantidade do loop

    while (movimentoCompleto--)
    {
        for (int direita1 = 0, direita2 = 0; direita1 < 1, direita2 < 1; direita1++, direita2++)
        {
            printf("Cima.\n");
            printf("Cima.\n");
        }
            printf("Direita.\n");
    }

}

int main() {
   
    // Implementação de Movimento do Bispo
    printf("<<< Movimentação do Bispo >>>\n\n");
    moverBispo(1);
    printf("\n");

    // Implementação de movimento do Bispo
    printf("<<< Movimentação da Torre. >>>\n\n");
    moverTorre(5);
    printf("\n");
    
    // Implementação de movimento da rainha
    printf("<<< Movimentação da Rainha. >>>\n\n");
    moverRainha(8);
    printf("\n");

    // Implementação de movimento do Cavalo
    printf("<<< Movimentação do Cavalo. >>>\n\n");
    moverCavalo(1);
    printf("\n");

    return 0;
}
