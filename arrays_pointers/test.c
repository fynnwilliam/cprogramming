#include <stdio.h>

int main() {
  int var = 3453;
  double vax = 3454;

  // printing the various address for var and vax...
  printf("var = %p\nvax = %p\n", &var, &vax);

  int * point = 0;
  point = &var;

  int j = *point;

  *point = 3459;

  printf("var = %d\nj = %d\n", var, j);

  return 0;
}
