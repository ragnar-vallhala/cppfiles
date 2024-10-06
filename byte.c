#include <stdio.h>
#define byte unsigned char

int main() {
  byte a = 6;
  printf("%b\n", a);
  a = 255;
  printf("%b\n", a);
  return 0;
}
