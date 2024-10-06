#include <stdio.h>

int main() {

  /*
   * for(initialization;condition;step)
   * {
   *    //code
   * }
   *
   * */

  // for (int i = 0; i < 10; i++) {
  // printf("%d", i);
  // }
  // printf("\n");
  //

  /*
   * initialization;
   * while(condition)
   * {
   *    //code
   *    step;
   * }
   *
   * */
  // int a = 0;
  // while (a < 10) {
  // printf("%d", a);
  // a++;
  // }
  //
  /*
   *
   * intialization;
   * do {
   *    // Code
   *    step;
   * } while (condition);
   *
   * */

  int a = 0;
  do {
    printf("%d", a);
    a++;
  } while (a < 10);

  return 0;
}
