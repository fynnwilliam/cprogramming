#include <stdio.h>
#include <ctype.h>

int main() {
  char message[] = "Writing objects: 100% (38//38), 13.75 KiB | 2.29 MiB//s, done.\n";

  printf(message);

  for (char * p = message; *p; ++p) {

    //assigning the value of p to c...
    char c = *p;

    printf("%c\t", c);

    if (isalnum(c)) printf("isalnum ");
    if (isalpha(c)) printf("isalpha ");
    if (ispunct(c)) printf("ispunct ");
    if (islower(c)) printf("islower ");
    if (isupper(c)) printf("isupper ");
    if (isblank(c)) printf("isblank ");
    if (isgraph(c)) printf("isgraph ");
    if (iscntrl(c)) printf("iscntrl ");
    if (isspace(c)) printf("isspace ");
    if (isxdigit(c)) printf("isxdigit ");
    if (isdigit(c)) printf("isdigit ");
    if (isprint(c)) printf("isprint ");

    printf("\n");
  }

  return 0;
}
