#include <stdio.h>
#include <string.h>

#define MAX_VALUE 100

int main() {
  int array[MAX_VALUE];
  int counter = 0;
  int is_sorted = 0;
  int tmp;
  char error_msg[] = "Fehler bei der Eingabe.";
  char term;
  int scan;
  int i;

  printf("Bitte bis zu %d ganze Zahlen eingeben:\n", MAX_VALUE);

  for(i = 0; i < MAX_VALUE; i++) {
    scan = scanf("%d%c", &array[i], &term);
    if(scan == EOF) break;
    if(scan != 2 || term != '\n') {
      if(array[i] != EOF) {
	printf(error_msg);
	return 0;
      }
    }
    counter++;
  }

  if(counter == 0) {
    printf(error_msg);
    return 0;
  }

  printf("Die zu sortierenden Zahlen:");
  for(i = 0; i < counter; i++) {
    printf(" %d", array[i]);
  }
  printf("\n");

  while(!is_sorted) {
    is_sorted = 1;
    for(i = 0; i < counter - 1; i++) {
      if(array[i] > array[i + 1]) {
	tmp = array[i];
	array[i] = array[i + 1];
	array[i + 1] = tmp;
	is_sorted = 0;
      }
    }
  }

  printf("Die Zahlen sortiert:");
  for(i = 0; i < counter; i++) {
    printf(" %d", array[i]);
  }
  printf("\n");
}
