#include <stdio.h>
#include <stdlib.h>

char* strinv(const char* s);
char* strconcat(const char* s, const char* t);

int main() {
  return 0;
}

char* strinv(const char* s) {int t_length = 0;

  for(int i = 0;; i++) {
    if(s[i] == '\0') break;
    else t_length++;
  }

  char* result = malloc(sizeof(char) * t_length);

  for(int i = t_length - 1; i >= 0; i--) {
    result[i] = s[t_length - i - 1];
  }

  return result;
}

char* strconcat(const char* s, const char* t) {
  int s_length = 0;
  int t_length = 0;

  for(int i = 0;; i++) {
    if(s[i] == '\0') break;
    else s_length++;
  }

  for(int i = 0;; i++) {
    if(t[i] == '\0') break;
    else t_length++;
  }

  char* result = malloc(sizeof(char) * (t_length + s_length));

  for(int i = 0; i < s_length; i++) {
    result[i] = s[i];
  }

  for(int i = s_length; i < s_length + t_length; i++) {
    result[i] = t[i - s_length];
  }

  return result;
}
