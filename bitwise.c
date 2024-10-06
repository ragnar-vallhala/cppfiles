#include <stdio.h>

int main() {
  int a, b;
  printf("Enter two numbers for AND: ");
  scanf("%d %d", &a, &b);
  printf("The result is %d\n", a & b);

  printf("Enter two numbers for OR: ");
  scanf("%d %d", &a, &b);
  printf("The result is %d\n", a | b);

  printf("Enter two numbers for XOR: ");
  scanf("%d %d", &a, &b);
  printf("The result is %d\n", a ^ b);

  printf("Enter one number for NOT: ");
  scanf("%d", &a);
  printf("The result is %d\n", !a);

  return 0;
}
