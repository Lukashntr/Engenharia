#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Importando a biblioteca time.h para usar a função time() e gerar números aleatórios



int main(){    

    int operacao, numero; // Variáveis para armazenar os números digitados pelo usuário
    int menu;

    // Inicializando o gerador de números aleatórios com base no tempo atual
    srand(time(NULL)); // Inicializando o gerador de números aleatórios com base no tempo

    // Gerando um número aleatório entre 1 e 100
    int numeroAleatorio = rand() % 100 + 1; // Gerando um número aleatório entre 1 e 100    

    // Loop para permitir que o usuário tente adivinhar o número até acertar
    do{

        printf("Bem-vindo ao jogo de adivinhação!\n");
        printf("Escolha a operação que deseja realizar:\n");
        printf("1 - Maior\n");
        printf("2 - Menor\n");
        printf("3 - Igual\n");
        scanf("%d", &operacao); // Lendo a opção escolhida pelo usuário

        if(operacao != 1 && operacao != 2 && operacao != 3){
            printf("Operação inválida! Tente novamente.\n");
            menu = 1;
        }

    }while(menu == 1);


    printf("Tente adivinhar o número entre 1 e 100.\n");
    scanf("%d", &numero); // Lendo o número digitado pelo usuário

    switch (operacao)
    {
    case 1:
        if(numero > numeroAleatorio){
            printf("Número maior!\n");
        }
        break;
    case 2:
        if(numero < numeroAleatorio){
            printf("Número menor!\n");
        }
        break;
    case 3:
        if(numero == numeroAleatorio){
            printf("Acertou!\n");
        }
        break;
    default:
        printf("Errou\n");
    }
    
    
    return 0;

}

/*

    if(operacao == 1){
        if(numero > numeroAleatorio){
            printf("Número maior!\n");
            }
        }else if(operacao == 2){
            if(numero < numeroAleatorio){
                printf("Número menor!\n");
            }
        }else if (operacao == 3){
            if(numero == numeroAleatorio){
                printf("Acertou!\n");
            }
        }else {
            printf("Errou\n");
        }


*/