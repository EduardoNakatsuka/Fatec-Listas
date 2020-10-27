#include <stdio.h>
#include <stdlib.h>

void imprimirSala(int sala[5][10]) {
  int c, l;
  printf("\nMapa de cadeiras na sala\n");

  for (c = 0; c < 10; c++) {
    printf("\t %d", c);
  }

  for (l = 0; l < 5; l++) {
    printf("\n%d\t", l);
    for (c = 0; c < 10; c++) {

      if (sala[l][c] == 0) {
        printf("[ ]\t");
      } else {
        printf("[%d]\t", sala[l][c]);
      }
    }
  }
}

int main() {
  int sala[5][10];
  int l, c, fila, cadeira, cliente;
  int sair = 1;

  for (l = 0; l < 5; l++) {
    for (c = 0; c < 10; c++) {
      sala[l][c] = 0;
    }
  }

  while (sair != 0) {
    imprimirSala(sala);

    printf("\n\nDigite a fila e poltrona que deseja ocupar separado por "
           "espacos: ");
    scanf("%d %d", &fila, &cadeira);
    system("cls");

    if (fila < 0 || fila > 4 || cadeira < 0 || cadeira > 9) {
      printf("\nLugar selecionado invalido!\n");
    } else if (sala[fila][cadeira] != 0) {
      printf("\nLugar reservado pelo cliente %d!\n", sala[fila][cadeira]);
    } else {
      printf("\nDigite o codigo do cliente: ");
      scanf("%d", &cliente);

      sala[fila][cadeira] = cliente;

      printf("\nReserva feita  pelo cliente %d: fila %d, cadeira %d", cliente,
             fila, cadeira);

      printf("\nDeseja continuar executando? [1-Sim 0-Nao]: ");
      scanf("%d", &sair);
    }
  }

  system("cls");
  printf("Finalizando com a sala da seguinte forma");
  imprimirSala(sala);
}

