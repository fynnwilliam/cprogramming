#include <stdio.h>

typedef struct  {
  float X;
  float Y;
} Pixel;

typedef unsigned char byte;

struct Color {
  byte Red;
  byte Green;
  byte Blue;
}

int main () {
  Pixel p = {2.0f, 5.0f};
  Color c = {223, 48};

  float x = p.X;
  c.Blue = 34;

  return 0;
}
