#include <stdio.h>

int main() {
  int input;
  char term;

  while(1) {
    if(scanf("%d%c", &input, &term) != 2 || term != '\n')
      break;
    else if(input >= 0)
      printf("OKT: %o HEX: %x\n", input, input);
    else break;
    }
  return 0;
}
