#include <stdio.h>
#include "libeod.h"

void main(){
  int x;
  printf("Input number : ");
  scanf("%d", &x );
  if(oe(x) == 1){
    printf("%d is odd number\n", x);
  }
  else if(oe(x) == 0){
    printf("%d is even number\n", x);
  }
  else{
    printf("error\n");
  }
}
