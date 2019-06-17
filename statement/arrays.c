#include <stdio.h>

int main() {
  int numbers [3] = {129, 193, 34};

  //calculating the sizeof an array
  int size = sizeof(numbers)  / sizeof(numbers[1]);

  for(int i = 0; i < size ; i++) {
    printf("%d\n", numbers[i]);
  }

  printf("\nsize of the array is '%d'\n\n", sizeof(numbers));

  //using an alternative approach for the 'for_loop'...
  int *p = numbers;
  int *end = p + size;

  for (; p != end; ++p) {
    printf("%d\n", *p);
  }

  printf("sizeof(numbers) = %d\nsizeof(p) = %d\n",
          (int) sizeof(numbers),
          (int) sizeof(p));

  //http://dl.upfdl.com/files/Series/Imposters/S02/

  return 0;
}
