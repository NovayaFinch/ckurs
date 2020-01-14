#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

int main() {
  char text[MAX_SIZE];
  int length;
  scanf("%s", &text);
  int palindrom = 1;

  for(int i = 0; i < (length = strlen(text)) / 2; i++) {
    if(tolower(text[i]) != tolower(text[length - 1 - i])) palindrom = 0;
  }

  if(palindrom) printf("Palindrom\n");
  else printf("kein Palindrom\n");
  return 0;
}
