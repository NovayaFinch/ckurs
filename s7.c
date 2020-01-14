#include <stdio.h>

int main() {
  int input;
  int sum;
  char term;
  char error[] = "Fehler bei der Eingabe.";

  if(scanf("%d%c", &input, &term) != 2 || term != '\n') printf(error);
  else if(input >= 0) {
    sum = 0;
  
    while(input != 0) {
      sum = sum + input % 10;
      input = input/10;
    }
    printf("Quersumme: %d", sum);
  }
  else printf(error);

  return sum;
}
