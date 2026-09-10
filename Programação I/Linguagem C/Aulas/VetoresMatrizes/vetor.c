#include <stdio.h>
#include <stdlib.h>

int main(){

    int index;

    char *nomesAlunos[5][3] = {
        {"aluno 1", "pt: 30", "mat: 40"},
        {"aluno 2", "pt: 20", "mat: 30"},
        {"aluno 3", "pt: 10", "mat: 20"},
        {"aluno 4", "pt: 0", "mat: 10"},
        {"aluno 5", "pt: 50", "mat: 60"}
    };

    printf("Digite o numero do aluno que queira ver as notas:\n");
    printf("0 - aluno 1\n");
    printf("1 - aluno 2\n");
    printf("2 - aluno 3\n");
    printf("3 - aluno 4\n");
    printf("4 - aluno 5\n");
    scanf("%d", &index);

    if (index >= 0 && index < 5) {
        printf("%s - %s - %s\n", nomesAlunos[index][0], nomesAlunos[index][1], nomesAlunos[index][2]);
    } else {
        printf("Número de aluno inválido.\n");
    }

    return 0;
}