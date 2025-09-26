# include <stdio.h>
// Movimentação de peças do xadrez com o uso de recursividade em funções para torre, bispo e rainha

// Função recursiva para movimentar a Torre
void moverTorre(int casas){ 
    if (casas > 0){
        printf ("Direita\n");
        moverTorre (casas-1); // chamada recursiva da função dentro dela mesma
    }
}

// Função recursiva para movimentar o Bispo
void moverBispo(int casas){
    if (casas > 0){
        printf ("Cima Direita\n");
        moverBispo (casas-1);
    }   
}

// Função recursiva para movimentar a rainha
void moverRainha(int casas){
    if (casas > 0){
        printf ("Esquerda\n");
        moverRainha (casas-1);
    }

}

int main () {
   int torre = 5, bispo = 5;
   int rainha = 8;
   printf("\nTorre se movimentando..\n");
   moverTorre(torre);

   printf("\nBispo se movimentando..\n");
   moverBispo(bispo);
   
   printf("\nRainha movimentando..\n");
   moverRainha(rainha);

    //movimento do Cavalo utilizando loops alinhados com duas variáveis 
    printf("\nCavalo movimentando..\n");
    for (int i = 0; i < 2; i++){
        printf ("Cima\n");
        for (int j = 0; j < i; j++){
            printf ("Direita\n");
        }
    }
    return 0;
}
