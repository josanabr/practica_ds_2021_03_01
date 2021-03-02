#include <stdio.h>

int suma(int  a, int b) {
  printf("Voy a sumar\n"); fflush(stdout);
  a = a + b;
  return a;
}
int resta(int  a, int b) {
  return a - b;
}
