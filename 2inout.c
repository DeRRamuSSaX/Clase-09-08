// Escribir un programa en C que acepte n enteros por entrada est ́andar hasta encontrar un cero. Al
// terminar de leer los n ́umeros, imprimir su suma.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int i = 0;
  int a;
  int sum = 0;
  while (i < n) {
    scanf("%d", &a);
    sum += a;
    if (a == 0) {
      break;
    }
    i++;
  }
  printf("Suma: %d\n", sum);
  return 0;
}
