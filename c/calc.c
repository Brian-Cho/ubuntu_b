#include <stdio.h>
#include "libmy.h"

void main() {
  int x, y;
  printf("Input two numbers : ");
  scanf("%d %d \n", &x, &y );
  printf("%d + %d = %d\n", x, y, plus(x,y));
  printf("%d - %d = %d\n", x, y, minus(x,y));
}
