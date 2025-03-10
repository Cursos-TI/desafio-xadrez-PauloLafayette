#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void  movimentacaoRainha(int rainha){
    if(rainha>0){
        movimentacaoRainha(rainha - 1);
        printf("Esquerda\n");
    }
}

void movimentacaoBispo(int bispo){
    if(bispo>0){
        
    int bispo2 = 1, bispo3 = 1;
    
    while(bispo2<= 5){//movimentação da peça
        
        for(bispo3;bispo3<=bispo2;bispo3++){
        printf("Cima\n");
    }
    
    printf("Direita\n");
    bispo2++;
}
    movimentacaoBispo(bispo - 1);
    }
}

void moviTorre(int torre){
    if(torre>0){
        printf("Direita\n");
        moviTorre(torre - 1);
    }
}
int main() {
    
    int cavalo =1,cavalo2 = 0, escolha;
    
    printf("Qual peça deseja movimentar ? \n1-Bispo\n2-Rainha\n3-Torre\n4-Cavalo\n Escolha: "); //menu para escolha de peça
    scanf("%d", &escolha);
        
    switch(escolha){ //definir a ação com base na escolha
        case 1:   
       movimentacaoBispo(1);
        
    break;
        
        
        case 2:
        movimentacaoRainha(8);
        
    break;
        
        case 3:
        moviTorre(5);
        
    break;
    
        case 4:

        for(cavalo;cavalo<=1;cavalo++){//movimentação da peça utilizando estruturas aninhadas
            while(cavalo2<=cavalo){
                printf("Cima\n");
                cavalo2++;
            }
            printf("Direita\n");
        }
    break;

    default://caso a opção seja inválida
        printf("Opção inválida");
        
    } 
    
    return 0;
}
// Nível Novato - Movimentação das Peças
// Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

// Implementação de Movimentação do Bispo
// Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

// Implementação de Movimentação da Torre
// Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

// Implementação de Movimentação da Rainha
// Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

// Nível Aventureiro - Movimentação do Cavalo
// Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
// Um loop pode representar a movimentação horizontal e outro vertical.

// Nível Mestre - Funções Recursivas e Loops Aninhados
// Sugestão: Substitua as movimentações das peças por funções recursivas.
// Exemplo: Crie uma função recursiva para o movimento do Bispo.

// Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
// Inclua o uso de continue e break dentro dos loops.
























