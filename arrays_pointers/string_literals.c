#include <stdio.h>

int stringLength (char *string) {
  int length = 0;

  while (*string++) {
    ++length;
  }

  return length;
}

int main() {
  /*
  char string [] = "hello from c";

  printf("size = %d\n", (int) sizeof(string));

  int length = 0;

  for (char *p = string; *p != 0; ++p) {
    ++length;
  }

  printf("length = %d\n", length);
  */

  printf("%d\n", stringLength("hello from c"));
  printf("%d\n", stringLength(""));
  printf("%d\n", stringLength("hi!"));
}
