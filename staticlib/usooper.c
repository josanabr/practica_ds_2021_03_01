#include <stdio.h>
#include "oper.h"

int main(int argc, char *argv[]) {
  int a = 5, b = 6;

  return suma(a, resta(b, 7));
}
