#include    <stdio.h>
#include    <stdlib.h>  
#include    <stdbool.h>


typedef struct 
{
    // Definindo os atributos do carro
    char modo;
    int velocidade;
    char marcha;
    char direcao;

} carroModelo ; // definindo a estrutura do carro
bool verificarModo(carroModelo car){

    if (car.modo == 'D'){ // se o carro estiver desligado, ele não vai verificar o modo
        printf("Carro desligado, Ligue para completar a ação\n"); // imprimindo mensagem de erro
        return true;
    } else if (car.marcha == 'N'){ // se o carro estiver na marcha neutra, ele não vai verificar o modo
        printf("Carro na marcha neutra, coloque em marcha para completar a ação\n"); // imprimindo mensagem de erro
        return true;
    } else if (car.velocidade == 0){ // se o carro estiver parado, ele não vai verificar o modo
        printf("Carro parado, acelere para completar a ação\n"); // imprimindo mensagem de erro
        return true;
    } else{
        return false;
    }
}

char ligarCarro(carroModelo car){  // função para ligar e desligar o carro

    if (car.modo == 'L'){
        printf("Carro ja esta ligado\n"); // imprimindo mensagem de erro
        return 0;
    }

    car.modo = 'L'; // mudando o valor do atributo modo para Ligado
    return car.modo; // retornando o valor do atributo modo
}

char desligarCarro(carroModelo car){ // função para desligar o carro

    if (car.modo == 'D'){
        printf("Carro ja esta desligado\n"); // imprimindo mensagem de erro
        return 0;
    }

    car.modo = 'D'; // mudando o valor do atributo modo para Desligado
    return car.modo; // retornando o valor do atributo modo
}

int acelerarCarro(carroModelo car){ // função para acelerar o carro

    if(car.modo == 'D' || car.marcha == 'N'){ // se o carro estiver desligado ou na marcha neutra, ele não vai trocar de marcha
        printf("Carro desligado, ou na marcha neutra, ligue o carro ou coloque em marcha para acelerar\n"); // imprimindo mensagem de erro
        return 0;
    }

    if(car.marcha == '1' && car.velocidade >= 20){ // se a marcha for 1 e a velocidade for maior ou igual a 20, ele não vai acelerar
        printf("Carro na primeira marcha, troque de marcha para acelerar\n"); // imprimindo mensagem de erro
        return 0;
    } else if (car.marcha == '2' && car.velocidade >= 40){ // se a marcha for 2 e a velocidade for maior ou igual a 40, ele não vai acelerar
        printf("Carro na segunda marcha, troque de marcha para acelerar\n"); // imprimindo mensagem de erro
        return 0;
    } else if (car.marcha == '3' && car.velocidade >= 60){ // se a marcha for 3 e a velocidade for maior ou igual a 60, ele não vai acelerar
        printf("Carro na terceira marcha, troque de marcha para acelerar\n"); // imprimindo mensagem de erro
        return 0;
    } else if (car.marcha == '4' && car.velocidade >= 80){ // se a marcha for 4 e a velocidade for maior ou igual a 80, ele não vai acelerar
        printf("Carro na quarta marcha, troque de marcha para acelerar\n"); // imprimindo mensagem de erro
        return 0;
    } else if (car.marcha == '5' && car.velocidade >= 100){ // se a marcha for 5 e a velocidade for maior ou igual a 100, ele não vai acelerar
        printf("Carro na quinta marcha, troque de marcha para acelerar\n"); // imprimindo mensagem de erro
        return 0;
    } else if (car.marcha == '6' && car.velocidade >= 120){ // se a marcha for 6 e a velocidade for maior ou igual a 120, ele não vai acelerar
        printf("O carro está na marcha maxima\n"); // imprimindo mensagem de erro
        return 0;
    }
    car.velocidade += 1; // aumentando a velocidade do carro em 1 km/h
    return car.velocidade; // retornando a velocidade do carro
}

int frearCarro(carroModelo car){ // função para frear o carro

    if(car.modo == 'D' || car.marcha == 'N'){ // se o carro estiver desligado ou na marcha neutra, ele não vai trocar de marcha
        printf("Carro desligado, ou na marcha neutra, ligue o carro ou coloque em marcha para frear\n"); // imprimindo mensagem de erro
        return 0;
    }

    car.velocidade -= 1; // diminuindo a velocidade do carro em 1 km/h
    return car.velocidade; // retornando a velocidade do carro
}

void verificarVelocidade(carroModelo car){

    if(car.modo == 'D' || car.marcha == 'N'){ // se o carro estiver desligado, ele não vai trocar de marcha
        printf("Carro desligado ou na marcha neutra, ligue o carro ou coloque em marcha para verificar a velocidade\n"); // imprimindo mensagem de erro
        return;
    }

    printf("Velocidade atual: %d km/h\n", car.velocidade); // imprimindo a velocidade atual do carro

}

char virarCarro(carroModelo car){ // função para virar o carro

    if(verificarModo(car) == true){
        return 0;
    }

    switch(car.direcao){ // switch para verificar a direção que o carro vai virar
        case 'E': // se a direção for E, o carro vai virar para a esquerda
            car.direcao = 'E'; // mudando o valor do atributo direcao para E
            break;
        case 'D': // se a direção for D, o carro vai virar para a direita
            car.direcao = 'D'; // mudando o valor do atributo direcao para D
            break;
        case 'F': // se a direção for F, o carro vai continuar reto
            car.direcao = 'N'; // mudando o valor do atributo direcao para N
            break;
        case 'R': // se a direção for R, o carro vai dar ré
            car.direcao = 'S'; // mudando o valor do atributo direcao para S
            break;
        default: // se a direção não for E ou D, o carro não vai virar
            printf("Direcao invalida\n"); // imprimindo mensagem de erro
            break;
    }
    return car.direcao; // retornando o valor do atributo direcao
}

char trocarMarcha(carroModelo car, char trocar){ // função para trocar a marcha do carro

    if(car.modo == 'D' || car.marcha == 'N'){ // se o carro estiver desligado, ele não vai trocar de marcha
        printf("Carro desligado, ligue o carro para trocar de marcha\n"); // imprimindo mensagem de erro
        return 0;
    }

    if (trocar == 'F')
    { // se o usuario quiser pular a marcha, ele vai pular para a proxima marcha

        switch(car.marcha)
        { // switch para verificar a marcha que o carro vai trocar

            case '1': // se a marcha for 1, o carro vai trocar para a segunda marcha
                car.marcha = '2'; // mudando o valor do atributo marcha para 2
                break;
            case '2': // se a marcha for 2, o carro vai trocar para a terceira marcha
                car.marcha = '3'; // mudando o valor do atributo marcha para 3
                break;
            case '3': // se a marcha for 3, o carro vai trocar para a quarta marcha
                car.marcha = '4'; // mudando o valor do atributo marcha para 4
                break;
            case '4': // se a marcha for 4, o carro vai trocar para a quinta marcha
                car.marcha = '5'; // mudando o valor do atributo marcha para 5
                break;
            case '5': // se a marcha for 5, o carro não vai trocar de marcha
                car.marcha = '6'; // mudando o valor do atributo marcha para 6
                break;
            case '6': // se a marcha for 6, o carro não vai trocar de marcha
                printf("Carro está na marcha maxima \n"); // imprimindo mensagem de erro
                break;
            case 'N': // se a marcha for N, o carro não vai trocar de marcha
                printf("Carro ja esta na neutra\n"); // imprimindo mensagem de erro
                break;
            default: // se a marcha não for 1, 2, 3, 4, 5 ou R, o carro não vai trocar de marcha
                printf("Marcha invalida\n"); // imprimindo mensagem de erro
                break;
        }

    } else if (trocar == 'T') // se o usuario quiser trocar a marcha, ele vai trocar para a marcha anterior
    { 
        switch(car.marcha){ // switch para verificar a marcha que o carro vai trocar
            case '1': // se a marcha for 1, o carro não vai trocar de marcha
                printf("Carro ja esta na primeira marcha\n"); // imprimindo mensagem de erro
                break;
            case '2': // se a marcha for 2, o carro vai trocar para a primeira marcha
                car.marcha = '1'; // mudando o valor do atributo marcha para 1
                break;
            case '3': // se a marcha for 3, o carro vai trocar para a segunda marcha
                car.marcha = '2'; // mudando o valor do atributo marcha para 2
                break;
            case '4': // se a marcha for 4, o carro vai trocar para a terceira marcha
                car.marcha = '3'; // mudando o valor do atributo marcha para 3
                break;
            case '5': // se a marcha for 5, o carro vai trocar para a quarta marcha
                car.marcha = '4'; // mudando o valor do atributo marcha para 4
                break;
            case '6': // se a marcha for 6, o carro vai trocar para a quinta marcha
                car.marcha = '5'; // mudando o valor do atributo marcha para 5
                break;
        }

    } else if(trocar == 'R'){ // se o usuario quiser trocar para a marcha ré, ele vai trocar para a marcha R
        car.marcha = 'R'; // mudando o valor do atributo marcha para R
    } else if(trocar == 'N'){ // se o usuario quiser trocar para a marcha neutra, ele vai trocar para a marcha N
        car.marcha = 'N'; // mudando o valor do atributo marcha para N
    } else { // se o usuario digitar uma opção inválida, ele vai receber uma mensagem de erro
        printf("Opcao invalida\n"); // imprimindo mensagem de erro
    }
    return car.marcha; // retornando o valor do atributo marcha
}

void ExibirStatus(carroModelo car){ // função para exibir o status do carro

    printf("=====STATUS DO CARRO=====\n"); // imprimindo mensagem de status do carro
    printf("Modo: %c\n", car.modo); // imprimindo o valor do atributo modo
    printf("Velocidade: %d km/h\n", car.velocidade); // imprimindo o valor do atributo velocidade
    printf("Marcha: %c\n", car.marcha); // imprimindo o valor do atributo marcha
    printf("Direcao: %c\n", car.direcao); // imprimindo o valor do atributo direcao

}

int main(void){

    int menu = 1;
    int opcao;
    char trocar;
    carroModelo car01 = {'D', 0, 'N', 'F'}; // Desligado, velocidade 0, marcha neutra, direção reta

    while (menu == 1)
    {
        printf("=====MENU=====\n");
        printf(" ESCOLHA AS AÇÕES PARA O CARRO \n");
        printf("1 - Ligar Carro\n");
        printf("2 - Desligar Carro\n");
        printf("3 - Trocar Marcha\n");
        printf("4 - Acelerar Carro\n");
        printf("5 - Frear Carro\n");
        printf("6 - Virar Carro\n");
        printf("7 - Sair\n");
        printf("8 - Exibir Status do Carro\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);

        if(opcao == 3) // se a opção for 3, ele vai perguntar se o usuário quer pular ou trocar a marcha
        {
            printf("Digite F para pular a marcha, T para trocar a marcha, R para marcha ré ou N para neutra: ");
            scanf(" %c", &trocar);
            car01.marcha = trocarMarcha(car01, trocar);
        }

        switch(opcao){
            case 1:
                car01.modo = ligarCarro(car01);
                break;
            case 2:
                car01.modo = desligarCarro(car01);
                break;
            case 3:
                car01.marcha = trocarMarcha(car01, trocar);
                break;
            case 4:
                car01.velocidade = acelerarCarro(car01);
                break;
            case 5:
                car01.velocidade = frearCarro(car01);
                break;
            case 6:
                car01.direcao = virarCarro(car01);
                break;
            case 7:
                menu = 0;
                break;
            case 8:
                ExibirStatus(car01);
                break;
            default:
                printf("Opcao invalida\n");
        }
    }
    return 0;
}
     