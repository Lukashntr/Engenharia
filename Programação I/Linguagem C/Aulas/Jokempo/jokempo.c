#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    int jogador1, maquina;
    // int jogador2;

    srand(time(0));

    printf("Digite a jogada do jogador:\n");
    printf("1 - Pedra\n");
    printf("2 - Papel\n");
    printf("3 - Tesoura\n");
    scanf("%d", &jogador1);

    /*
    printf("Digite a jogada do jogador 2: ");
    printf("1 - Pedra\n");
    printf("2 - Papel\n");
    printf("3 - Tesoura\n");
    scanf("%d", &jogador2);
    */

    maquina = rand() % 3 + 1;

    printf("Jogada da máquina: %d\n", maquina);

    if(jogador1 == maquina){
        printf("Empate!\n");
    } else if(
            (jogador1 == 1 && maquina == 3) 
         || (jogador1 == 2 && maquina == 1) 
         || (jogador1 == 3 && maquina == 2)  
            )
        {
        printf("Jogador venceu!\n");
    } else {
        printf("Maquina venceu!\n");
    }

}