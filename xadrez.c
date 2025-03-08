#include<stdio.h>

int main(){
    printf("Movimento da Torre:\n");
    for(int Torre = 0; Torre < 5; Torre++){
        printf("Direita\n");
    }

    printf("\nMovimento do Bispo:\n");
    for(int Bispo = 0; Bispo < 5; Bispo++){
        printf("Cima Direita\n");
    }

    printf("\nMovimento da Rainha:\n");
    for(int Rainha = 0; Rainha < 8; Rainha++){
        printf("Esquerda\n");
    }
    printf("\nMovimento do Cavalo:\n");
    for(int Cavalo1 = 0; Cavalo1<1;Cavalo1++){
        int Cavalo2 = 0 ;
        while(Cavalo2<2){
            printf("Baixo\n");
            Cavalo2++;
        }
        printf("Esquerda\n");
    }
            
}
