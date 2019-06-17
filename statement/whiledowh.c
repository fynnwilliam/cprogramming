#include <stdio.h>

int main() {
  int count = 0;

  while (count <= 5) {
    printf("count %d\n", count);
    count += 1;
  }

  do {
    printf("count %d\n", count);
    count += 1;
  } while (count < 0);

  return 0;
}
