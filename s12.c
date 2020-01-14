#include <stdio.h>

#define MAX_ASCII 128
int main() {
  int list[MAX_ASCII];
  char c;

  for(int i = 0; i < MAX_ASCII; i++) {
    list[i] = 0;
  } 
  while((c = getchar()) != EOF) {
    list[c]++;
  }
  for(int i = 0; i < MAX_ASCII; i++) {
    if(i > 31 && i != 127) {
      printf("%c : %d\n", i, list[i]);
    }
    else {
      printf("<CTRL> %d : %d\n", i, list[i]);
    }
  }
  return 0;
}
