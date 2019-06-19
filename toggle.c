#include <stdio.h>
#include <ctype.h>

int main() {

  //instructions for user...
  printf ("Kindly entre any word or statement without spaces\nnote that a max of 29 characters will be displayed\nlet's have some fun!\n");

  //declaring message, an array of size 29
  char message [29];

  // scanning for the entered characters, not more than 29....
  scanf("%29s", &message, sizeof(message));

  //toggling all characters... :)
  for (char *p = message; *p; ++p) {

    if (islower(*p))
      *p = toupper(*p);
    else if (isupper(*p))
      *p = tolower(*p);
  }

  //displaying toggled message...
  printf("\n%s\n\n", message);

  return 0;
}
