#include<stdio.h>

void Torre(int t){
    if(t>0){
        printf("Direita\n");
        Torre(t-1);
    }
}

void Bispo(int b){
    for(b=0;b<5;b++){
        printf("Cima ");
        for(int b2=b-1;b2<b;b2++){
            printf("Direita\n");
        }
    }
}

void Rainha(int r){
    if(r>0){
        printf("Esquerda\n");
        Rainha(r-1);
    }
}

void Cavalo(){
    for(int C1 =0,C2=0;C1<1 && C2<2; C2++){
        printf("Baixo ");
        if(C2==1){
            printf("Esquerda\n");
            C1++;
        }
    }
}
int main(){
    printf("Movimento da Torre:\n");
    Torre(5);

    printf("\nMovimento do Bispo:\n");
    Bispo(5);

    printf("\nMovimento da Rainha:\n");
    Rainha(8);

    printf("\nMovimento do Cavalo:\n");
    Cavalo();           
}
