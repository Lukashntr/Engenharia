#include <stdio.h>
#include <stdlib.h>

int main() {

    // Variáveis para armazenar as notas e a média  
    float nota1, nota2, nota3, media;

    // Variável para armazenar a opção do usuário no menu
    int menu = 1; 

    do { // Loop para permitir que o usuário sobrescreva as notas se desejar

        // Solicitando ao usuário que digite as três notas
        printf("Menu de opções:\n");
        printf("Digite a primeira nota: \n");
        scanf("%f", &nota1);
        printf("Digite a segunda nota: \n");
        scanf("%f", &nota2);
        printf("Digite a terceira nota: \n");
        scanf("%f", &nota3);
        printf("Deseja sobrescrever as notas? \n");
        printf("Digite 1 para sim ou 0 para não: \n");
        scanf("%d", &menu);

    } while (menu == 1); //enquanto o usuário digitar 1, o loop vai continuar, se digitar 0, o loop vai parar

    media = (nota1 + nota2 + nota3) / 3; // Calculando a média das notas de forma simples, somando as notas e dividindo por 3

    printf("A média das notas é: %.2f\n", media); // Imprimindo a média das notas com duas casas decimais

    return 0;

}