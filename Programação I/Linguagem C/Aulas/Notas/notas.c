#include <stdio.h>

int main() {
  int nota;

  printf("Digite a sua nota: \n");
  scanf("%d", &nota);

  if (nota >= 9) {
    printf("Sua nota é A\n");
  } else if (nota >= 8) {
    printf("Sua nota é B\n");
  } else if (nota >= 7) {
    printf("Sua nota é C\n");
  } else if (nota >= 6) {
    printf("Sua nota é D\n");
  } else {
    printf("Sua nota é F\n");
  }

  return 0;
}