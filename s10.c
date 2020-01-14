#include <stdio.h>
#include <string.h>

#define MAX_VALUE 150

int main() {
  char first[MAX_VALUE];
  char second[MAX_VALUE];
  char sum[100];
  char error_message[] = "Fehler bei der Eingabe.\n";

  fgets(first, MAX_VALUE, stdin);
  if(strlen(first) > 50) {
    printf("%s", error_message);
    return 0;
  }

  fgets(second, MAX_VALUE, stdin);
  if(strlen(second) > 50) {
    printf("%s", error_message);
    return 0;
  }

  for(int i = 0; i < strlen(first); i++) {
    if(first[i] != '\n' && first[i] != '\0')
      sum[i] = first[i];
  }

  for(int i = 0; i < strlen(second); i++) {
    if(first[i] != '\0')
      sum[i + strlen(first)] = second[i];
  }

  for(int i = 0; i < strlen(sum); i++) {
    if(sum[i] >= 'A' && sum[i] <= 'z') 
      printf("%c", sum[i]);
    if(sum[i] == '\n') {
      printf("\n");
      break;
    }
  }
  
  return 0;
}
