#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    // Nível Novato - Movimentação das Peças

    const int maxCasasBispo = 5, maxCasasTorre = 5, maxCasasRainha = 8;
    int passosBispo = 0, passosRainha = 0;

    // Implementação de Movimentação do Bispo
    printf("<<< Movimentação do Bispo >>>\n\n");

    do 
    {

        if (passosBispo == 4) {
            printf("Direita, Cima.\n\n");
            passosBispo++;
        } else {
            printf("Direita, Cima.\n");
            passosBispo++;
        }
    } while (passosBispo <= 4);

    // Implementação de Movimentação da Torre
    printf("<<< Movimentação da Torre. >>>\n\n");

    for (int passosTorre = 0; passosTorre <= 4; passosTorre++){

        if (passosTorre == 4){
        printf("Direita.\n\n");
        } else {
            printf("Direita.\n");
        }
    }
    
    // Implementação de Movimentação da Rainha
    printf("<<< Movimentação Rainha. >>>\n\n");
    while (passosRainha <= 7){
        
        if (passosRainha == 7){
        printf("Esquerda.\n\n");
        } else {
            printf("Esquerda.\n");
        }
        passosRainha++;
    }


    // Nível Aventureiro - Movimentação do Cavalo
    printf("<<< Movimentação Cavalo. >>>\n\n");

    int movimentoCompleto = 1; //flag para controlar o movimento em L

    while (movimentoCompleto--)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Baixo\n"); //imprime cima duas vezes
        }
        printf("Esquerda\n"); //imprime direita uma vez
    }
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
