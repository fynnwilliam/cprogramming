#include <stdio.h>

int main() {
  int eggs = 3;

  //testing if statement
  if (eggs == 1) {
    printf("cupcake!\n");
  }
  else if (eggs > 1) {
    printf("cake! :)\n");
  }
  else {
    printf("no cake :(\n");
  }

  //testing switch statement
  switch (eggs) {
    case 0: printf("no cake!:(\n");
    break;
    case 1: printf("cupcake!\n");
    break;
    default: printf("cake :)\n");
  }
}
