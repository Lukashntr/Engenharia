#include <stdio.h>

//função com a tarefa de dividir 2 numeros
float Dividir(float a, float b) {
    if (b == 0) { 
        printf("Erro: divisão por zero!\n"); // se b for igual a 0 a conta da erro
        return 0.0f; 
    }
    return a / b; // se b nao for igual a 0 o resultado vai ser calculado

}

// Função void para comparar dois números e imprimir o maior
void CompararTudo(float a, float b) {
    if (a > b) {
        printf("%f Ganhou\n",a); 
    } else if (b > a) {    
        printf("%f Ganhou\n",b); 
    } else {
        printf("Empatou\n"); 
    }
}

// Função void para comparar a densidade populacional de duas cidades
void CompararDensidade(float a, float b) {
    if (a < b) {
        printf("%f Ganhou\n",a); 
    } else if (b < a) {    
        printf("%f Ganhou\n",b); 
    } else {
        printf("Empatou\n"); 
    }
}

// Definição da estrutura para armazenar os dados da cidade
typedef struct {
    char carta;
    char estado[30];
    char nome[30];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Cidade; // Estrutura para armazenar os dados da cidade

float SuperPoder(Cidade c) {

    // Calculando a densidade populacional e o PIB per capita usando a função Dividir
    float densidade = Dividir(c.populacao, c.area);
    float pibPerCapita = Dividir(c.pib, c.populacao);

    // Calculando o super poder da cidade somando todas as suas propriedades
    float superPoder = (densidade + pibPerCapita + c.pontosTuristicos + c.area + c.pib + c.populacao); // Calculando o super poder da cidade com base em suas propriedades

    return superPoder; // Retornando o valor do super poder da cidade
}

// Função void para exibir os resultados da carta
void ExibirCarta(Cidade c) {

    // Calculando a densidade populacional e o PIB per capita usando a função Dividir
    float densidade = Dividir(c.populacao, c.area);
    float pibPerCapita = Dividir(c.pib, c.populacao);

    // Exibindo os resultados da carta da cidade
    printf("\n=== Carta da Cidade ===\n");
    printf("Carta: %c\nEstado: %s\nCidade: %s\nPopulacao: %d habitantes\nArea: %.2f km\nPIB: %.2f milhoes de reais\nPontos Turisticos: %d\nDensidade Populacional: %.2f hab/km \nPIB per Capita: %.2f Reais\n",
           c.carta, c.estado, c.nome, c.populacao, c.area, c.pib, c.pontosTuristicos, densidade, pibPerCapita);
    printf("Super Poder: %.2f\n", SuperPoder(c)); // Exibindo o super poder da cidade

}

void CompararCartas(Cidade c1, Cidade c2) {

    // definindo variaveis float para o resultado das divisões
    float densidade1 = Dividir(c1.populacao, c1.area);
    float densidade2 = Dividir(c2.populacao, c2.area);
    float pibPerCapita1 = Dividir(c1.pib, c1.populacao);
    float pibPerCapita2 = Dividir(c2.pib, c2.populacao);

    // Comparando a densidade populacional das cidades usando a função CompararDensidade
    printf("\n=== Comparacao das Cartas ===\n");
    printf("Comparando Densidade Populacional:\n");
    CompararDensidade(densidade1, densidade2);
        if(densidade1 < densidade2 ){
            printf("%s tem a menor densidade populacional\n", c1.nome);
        } else if(densidade2 < densidade1){
            printf("%s tem a menor densidade populacional\n", c2.nome);
        } else {
            printf("As cidades tem a mesma densidade populacional\n");
        }

    // Comparando as propriedades das cidades
    printf("Comparando Propriedades:\n");

    // Comparando PIB das cidades usando a função CompararTudo e if else para imprimir qual cidade tem o maior PIB
    CompararTudo(c1.pib, c2.pib);// Comparando PIB
        if(c1.pib > c2.pib){
            printf("%s tem o maior PIB\n", c1.nome);
        } else if(c2.pib > c1.pib){
            printf("%s tem o maior PIB\n", c2.nome);
        } else {
            printf("As cidades tem o mesmo PIB\n");
        }

    // Comparando população das cidades usando a função CompararTudo e if else para imprimir qual cidade tem a maior população
    CompararTudo(c1.populacao, c2.populacao);// Comparando população
        if(c1.populacao > c2.populacao){
            printf("%s tem a maior populacao\n", c1.nome);
        } else if(c2.populacao > c1.populacao){
            printf("%s tem a maior populacao\n", c2.nome);
        } else {
            printf("As cidades tem a mesma populacao\n");
        }
    
    // Comparando pontos turisticos das cidades usando a função CompararTudo e if else para imprimir qual cidade tem mais pontos turisticos
    CompararTudo(c1.pontosTuristicos, c2.pontosTuristicos);// Comparando pontos turisticos
        if (c1.pontosTuristicos > c2.pontosTuristicos) {
            printf("%s tem mais pontos turisticos\n", c1.nome);
        } else if (c2.pontosTuristicos > c1.pontosTuristicos) {
            printf("%s tem mais pontos turisticos\n", c2.nome);
        } else {
            printf("As cidades tem o mesmo numero de pontos turisticos\n");
        }
    
    // Comparando área das cidades usando a função CompararTudo e if else para imprimir qual cidade tem a maior área
    CompararTudo(c1.area, c2.area); // Comparando área
        if(c1.area > c2.area){
            printf("%s tem a maior area\n", c1.nome);
        } else if(c2.area > c1.area){
            printf("%s tem a maior area\n", c2.nome);
        } else {
            printf("As cidades tem a mesma area\n");
        }

    // Comparando PIB per capita das cidades usando a função CompararTudo e if else para imprimir qual cidade tem o maior PIB per capita
    CompararTudo(pibPerCapita1, pibPerCapita2); // Comparando PIB per capita
        if(pibPerCapita1 > pibPerCapita2){
            printf("%s tem o maior PIB per capita\n", c1.nome);
        } else if(pibPerCapita2 > pibPerCapita1){
            printf("%s tem o maior PIB per capita\n", c2.nome);
        } else {
            printf("As cidades tem o mesmo PIB per capita\n", c1.nome);
        }

    // Comparando Super Poder das cidades
        printf("Comparando Super Poder:\n");
    CompararTudo(SuperPoder(c1), SuperPoder(c2));
    if (SuperPoder(c1) > SuperPoder(c2)) {
        printf("%s venceu no Super Poder!\n", c1.nome);
    } else if (SuperPoder(c2) > SuperPoder(c1)) {
        printf("%s venceu no Super Poder!\n", c2.nome);
    } else {
        printf("Empate no Super Poder!\n");
    }

}

int main() {
    Cidade cidade1, cidade2;

    // Recebendo dados da cidade 1
    printf("Digite a letra da carta 1: "); // perguntando ao usuario a carta
    scanf(" %c", &cidade1.carta); // scanf vai receber o valor digitado pelo usuario e armazenar na variavel carta
    printf("Carta 1: %c\n", cidade1.carta); // imprimindo o valor da variavel carta

    printf("Digite o estado da carta 1: "); // perguntando ao usuario o estado
    scanf(" %s", cidade1.estado); // scanf vai receber o valor digitado pelo usuario e armazenar na variavel estado
    printf("Estado 1: %s\n", cidade1.estado); // imprimindo o valor da variavel estado 

    printf("Digite o nome da cidade 1: "); // perguntando ao usuario o nome da cidade
    scanf(" %s", cidade1.nome); // scanf vai receber o valor digitado pelo usuario e armazenar na variavel nome
    printf("Cidade 1: %s\n", cidade1.nome); // imprimindo o valor da variavel nome

    printf("Digite a populacao da cidade 1: "); // perguntando ao usuario a populacao
    scanf("%d", &cidade1.populacao); // scanf vai receber o valor digitado pelo usuario e armazenar na variavel populacao
    printf("Populacao 1: %d habitantes\n", cidade1.populacao); // imprimindo o valor da variavel populacao 

    printf("Digite a area da cidade 1: "); // perguntando ao usuario a area
    scanf("%f", &cidade1.area); // scanf vai receber o valor digitado pelo usuario e armazenar na variavel area
    printf("Area 1: %.2f km\n", cidade1.area); // imprimindo o valor da variavel area

    printf("Digite o PIB da cidade 1: "); // perguntando ao usuario o pib
    scanf("%f", &cidade1.pib); // scanf vai receber o valor digitado pelo usuario e armazenar na variavel pib
    printf("PIB 1: %.2f milhoes de reais\n", cidade1.pib); // imprimindo o valor da variavel pib

    printf("Digite o numero de pontos turisticos da cidade 1: "); // perguntando ao usuario o numero de pontos turisticos
    scanf("%d", &cidade1.pontosTuristicos); // scanf vai receber o valor digitado pelo usuario e armazenar na variavel pontosTuristicos
    printf("Pontos Turisticos 1: %d\n", cidade1.pontosTuristicos); // imprimindo o valor da variavel pontosTuristicos

    // Recebendo dados da cidade 2
    printf("\nDigite a letra da carta 2: "); // perguntando ao usuario a carta
    scanf(" %c", &cidade2.carta); // scanf vai receber o valor digitado pelo usuario e armazenar na variavel carta
    printf("Carta 2: %c\n", cidade2.carta); // imprimindo o valor da variavel carta

    printf("Digite o estado da carta 2: "); // perguntando ao usuario o estado
    scanf(" %s", cidade2.estado); // scanf vai receber o valor digitado pelo usuario e armazenar na variavel estado
    printf("Estado 2: %s\n", cidade2.estado); // imprimindo o valor da variavel estado

    printf("Digite o nome da cidade 2: "); // perguntando ao usuario o nome da cidade   
    scanf(" %s", cidade2.nome); // scanf vai receber o valor digitado pelo usuario e armazenar na variavel nome
    printf("Cidade 2: %s\n", cidade2.nome); // imprimindo o valor da variavel nome

    printf("Digite a populacao da cidade 2: "); // perguntando ao usuario a populacao
    scanf("%d", &cidade2.populacao); // scanf vai receber o valor digitado pelo usuario e armazenar na variavel populacao
    printf("Populacao 2: %d habitantes\n", cidade2.populacao); // imprimindo o valor da variavel populacao

    printf("Digite a area da cidade 2: "); // perguntando ao usuario a area
    scanf("%f", &cidade2.area); // scanf vai receber o valor digitado pelo usuario e armazenar na variavel area
    printf("Area 2: %.2f km\n", cidade2.area); // imprimindo o valor da variavel area

    printf("Digite o PIB da cidade 2: "); // perguntando ao usuario o pib
    scanf("%f", &cidade2.pib); // scanf vai receber o valor digitado pelo usuario e armazenar na variavel pib
    printf("PIB 2: %.2f milhoes de reais\n", cidade2.pib); // imprimindo o valor da variavel pib

    printf("Digite o numero de pontos turisticos da cidade 2: "); // perguntando ao usuario o numero de pontos turisticos
    scanf("%d", &cidade2.pontosTuristicos); // scanf vai receber o valor digitado pelo usuario e armazenar na variavel pontosTuristicos
    printf("Pontos Turisticos 2: %d\n", cidade2.pontosTuristicos); // imprimindo o valor da variavel pontosTuristicos

    // Exibindo os resultados das cidades com função void
    ExibirCarta(cidade1);
    ExibirCarta(cidade2);

    // Comparando as cartas
    CompararCartas(cidade1, cidade2);

    return 0;
    
    /* 
    Programa melhorado usando algumas funções com void e estruturas 
    para armazebar as variaveis com os dados das cidades, tornando o código mais organizado 
    e legível
    */

}
