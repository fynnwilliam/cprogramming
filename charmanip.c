#include <stdio.h>
#include <ctype.h>

int main () {

  char message[] = "hello EveryOne - thIs iS FuN :) \n";

  for (char * p = message; *p; ++p) {

    if (isupper(*p))
      *p = (char) tolower(*p);
    else if (islower(*p))
      *p = (char) toupper(*p);
  }

  printf(message);

  return 0;
}