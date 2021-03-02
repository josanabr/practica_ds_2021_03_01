/*
 * Este programa muestra como leer varias palabras del teclado (stdin)
 * Codigo tomado de: https://www.programiz.com/c-programming/c-strings
 *
 * Modificado por: John Sanabria - john.sanabria@correounivalle.edu.co
 * Fecha: 2021-02-26
 */
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  char comando[256];

  printf("Digite su comando ");
  fgets(comando, sizeof(comando), stdin);
  printf("Comando: ");
  comando[strlen(comando)] = '\x0';
  puts(comando);

  return 0;
}

