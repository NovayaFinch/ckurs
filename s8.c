#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX_INPUT 100

int main() {
  double input;
  int control;
  double sum = 0;
  int counter = 0;
  char error_message[] = "Fehler bei der Eingabe.\n";

  while(1) {
    control = scanf("%lf", &input);
    if(control == 1) {
     sum += input;
     counter++;
    } else if(control != EOF){
      printf(error_message);
      return 0;
    } else break;
  }

  sum /= counter;
  printf("Lösung:%lf\n", sum);

  return 0;
}
