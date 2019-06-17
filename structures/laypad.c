#include <stdio.h>

typedef struct {

  int second;
  short first;
  short third;

} Layout;

int main() {
  printf("short = %d\n", (int) sizeof(short));
  printf("int = %d\n", (int) sizeof(int));
  printf("struct = %d\n", (int) sizeof(Layout));

  return 0;
}
