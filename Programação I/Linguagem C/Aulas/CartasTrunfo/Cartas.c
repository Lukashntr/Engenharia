#include <stdio.h>

int main() {

    // definindo valores as variaveis da cidade 1
    char carta1;
    char estado1[30];
    char NomeCidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int PontosTuristicos1;
 
    // definindo valores as variaveis da cidade 2
    char carta2;
    char estado2[30];
    char NomeCidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int PontosTuristicos2;

    /* 
        %c para char, caracteres 
        %s para string, texto
        %d para int, numeros inteiros 
        %f para float, numeros fracionados
    */

    // recebendo dados da carta da cicade 1
    printf("digite a letra da carta 1: "); // perguntando ao usuario a carta
    scanf(" %c", &carta1); // scanf vai receber o valor digitado pelo usuario e armazenar na variavel carta
    printf("Carta 1: %c\n", carta1); // imprimindo o valor da variavel carta

    printf("digite o estado da carta 1: "); // perguntando ao usuario o estado
    scanf(" %s", estado1); // scanf vai receber o valor digitado pelo usuario e armazenar na variavel estado
    printf("Estado 1: %s\n", estado1); // imprimindo o valor da variavel estado

    printf("digite o nome da cidade 1: "); // perguntando ao usuario o nome da cidade
    scanf(" %s", NomeCidade1); // scanf vai receber o valor digitado pelo usuario e armazenar na variavel NomeCidade
    printf("Cidade 1: %s\n", NomeCidade1); // imprimindo o valor da variavel NomeCidade

    printf("digite a populacao da cidade 1: "); // perguntando ao usuario a populacao
    scanf(" %d", &populacao1); // scanf vai receber o valor digitado pelo usuario e armazenar na variavel populacao
    printf("Populacao 1: %d habitantes\n", populacao1); // imprimindo o valor da variavel populacao

    printf("digite a area da cidade 1: "); // perguntando ao usuario a area
    scanf(" %f", &area1); // scanf vai receber o valor digitado pelo usuario e armazenar na variavel area
    printf("Area 1: %.2f km\n", area1); // imprimindo o valor da variavel area

    printf("digite o pib da cidade 1: "); // perguntando ao usuario o pib
    scanf(" %f", &pib1); // scanf vai receber o valor digitado pelo usuario e armazenar na variavel pib
    printf("PIB 1: %.2f milhoes de reais\n", pib1); // imprimindo o valor da variavel pib

    printf("digite o numero de pontos turisticos da cidade 1: "); // perguntando ao usuario o numero de pontos turisticos
    scanf(" %d", &PontosTuristicos1); // scanf vai receber o valor digitado pelo usuario e armazenar na variavel PontosTuristicos
    printf("Pontos Turisticos 1: %d\n", PontosTuristicos1); // imprimindo o valor da variavel PontosTuristicos

    // recebendo dados da carta da cicade 2

    printf("digite a letra da carta 2: "); // perguntando ao usuario a carta
    scanf(" %c", &carta2); // scanf vai receber o valor digitado pelo usuario e armazenar na variavel carta
    printf("Carta 2: %c\n", carta2); // imprimindo o valor da variavel carta

    printf("digite o estado da carta 2: "); // perguntando ao usuario o estado
    scanf(" %s", estado2); // scanf vai receber o valor digitado pelo usuario e armazenar na variavel estado
    printf("Estado 2: %s\n", estado2); // imprimindo o valor da variavel estado

    printf("digite o nome da cidade 2: "); // perguntando ao usuario o nome da cidade
    scanf(" %s", NomeCidade2); // scanf vai receber o valor digitado pelo usuario e armazenar na variavel NomeCidade
    printf("Cidade 2: %s\n", NomeCidade2); // imprimindo o valor da variavel NomeCidade

    printf("digite a populacao da cidade 2: "); // perguntando ao usuario a populacao
    scanf(" %d", &populacao2); // scanf vai receber o valor digitado pelo usuario e armazenar na variavel populacao
    printf("Populacao 2: %d habitantes\n", populacao2); // imprimindo o valor da variavel populacao

    printf("digite a area da cidade 2: "); // perguntando ao usuario a area
    scanf(" %f", &area2); // scanf vai receber o valor digitado pelo usuario e armazenar na variavel area
    printf("Area 2: %.2f km\n", area2); // imprimindo o valor da variavel area

    printf("digite o pib da cidade 2: "); // perguntando ao usuario o pib
    scanf(" %f", &pib2); // scanf vai receber o valor digitado pelo usuario e armazenar na variavel pib
    printf("PIB 2: %.2f milhoes de reais\n", pib2); // imprimindo o valor da variavel pib

    printf("digite o numero de pontos turisticos da cidade 2: "); // perguntando ao usuario o numero de pontos turisticos
    scanf(" %d", &PontosTuristicos2); // scanf vai receber o valor digitado pelo usuario e armazenar na variavel PontosTuristicos
    printf("Pontos Turisticos 2: %d\n", PontosTuristicos2); // imprimindo o valor da variavel PontosTuristicos

    /* exibe os dados da carta da cidade */
    printf("\n=== Carta da Cidade 1 ===\n");
    printf("Carta: %c\nEstado: %s\nCidade: %s\nPopulacao: %d habitantes\nArea: %.2f km\nPIB: %.2f milhoes de reais\nPontos Turisticos: %d\n",
       carta1, estado1, NomeCidade1, populacao1, area1, pib1, PontosTuristicos1);

    printf("\n=== Carta da Cidade 2 ===\n");
    printf("Carta: %c\nEstado: %s\nCidade: %s\nPopulacao: %d habitantes\nArea: %.2f km\nPIB: %.2f milhoes de reais\nPontos Turisticos: %d\n",
       carta2, estado2, NomeCidade2, populacao2, area2, pib2, PontosTuristicos2);


       // esse programa poderia ser melhorado utilizando estruturas de arrays e funções para receber nomes com espaços, mas como ainda não vimos isso, vamos deixar assim mesmo.
}