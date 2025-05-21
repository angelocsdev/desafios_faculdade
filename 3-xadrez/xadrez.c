// Desafio Xadrez

int main(){
    // A torre vai se mover 5 casas a direita
    printf("\n- Movimento da Torre -\n");
    for(int i = 0; i < 5; i++){
        printf("\nDireita\n");
    }

    // O bispo vai se mover 5 casas para cima e para a direita
    printf("\n- Movimento do Bispo - \n");
    int bispo = 0;
    while(bispo < 5){ 
        printf("\nCima e Direita\n");
        bispo++;
    }

    // A Rainha vai se mover 8 casas para a esquerda
    printf("\n- Movimento da Rainha - \n");
    int rainha = 0;
    do{
        printf("\nEsquerda\n");
        rainha++;
    } while(rainha < 8);
    
    return 0;
}