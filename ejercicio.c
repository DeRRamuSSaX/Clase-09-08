#include <stdio.h>
#define MAXLINE 10

// int main(void) {
//   char buffer[MAXLINE];
//   while (fgets(buffer, MAXLINE, stdin))
//     printf("%s", buffer);
//   return 0;
// }

// int main(void) {
//   FILE *fp;
//   fp = fopen("a.txt", "w");
//   fprintf(fp, "abcdefghijklmnñopq\n");
//   fclose(fp);
//   return 0;
// }

int main(int argc, char const *argv[]) {
  int opcion = 0;
  int c;
  while (1) {
    printf("1) Opcion 1\n");
    printf("2) Opcion 2\n");
    printf("3) Salir\n");
    scanf("%d", &opcion);
    getchar(); //esto saca el \n
    switch (opcion) {
      case 1:
      system("clear");
      printf("Elegiste opcion 1\n");
      printf("Presiona cualquier tecla para continuar\n");
      scanf("%c", %c);
      break;
      case 2:
      system("clear");
      printf("Elegiste opcion 2\n");
      printf("Presiona cualquier tecla para continuar\n");
      scanf("%c", %c);
      break;
      case 3:
      
    }
  }
  return 0;
}
