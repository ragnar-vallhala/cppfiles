#include <stdio.h>

int main() {
  // int a = 10;
  // int b = 5;
  // address size value
  // printf("Address: %x,  %x, Size: %d, Value: %d\n", &a, &b, sizeof(a), a);

  int a = 10;
  int *b = &a;
  printf("Address: %x, %x\n", &a, b);
  printf("value: %d\n", *b);
  a = 15;
  printf("value: %d\n", *b);
  b--;
  printf("value: %d\n", *b);
  return 0;
}
