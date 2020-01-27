#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_VALUE 100

void error() {
  printf("Fehler bei der Eingabe.");
  exit(1);
}

int main() {
  char string1[MAX_VALUE];
  char string2[MAX_VALUE];

  fgets(string1, MAX_VALUE, stdin);
  fgets(string2, MAX_VALUE, stdin);

  if(strlen(string1) > 50 || strlen(string2) > 50) {
    error();
  }

  char *zeilenumbruch = strchr(string1, '\n');
  if(zeilenumbruch != NULL) *zeilenumbruch = '\0';

  zeilenumbruch = strchr(string2, '\n');
  if(zeilenumbruch != NULL) *zeilenumbruch = '\0';

  printf("%s%s", string1, string2);
  return 0;
} 
