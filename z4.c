#include <stdio.h>


char* strchr(const char* s, int c);
int strend(const char* s, const char* t);
char* strstr(const char* s, const char* t);


int main() {
  return 0;
}

int strend(const char* s, const char* t) {
  int matches = 1;
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

  for(int i = 0; i < t_length; i++) {
    if(s[i + s_length - t_length] != t[i]) matches = 0;
  }

  return matches;
}


char *strchr(const char* s, int c) {
  const char* last = 0;
  int length = 0;

  for(int i = 0;; i++) {
    if(s[i] == '\0') break;
    else length++;
  }

  for(int i = 0; i < length; i++) {
    if(s[i] == c) last = &s[i];
  }

  return (char*)last;
}

char *strstr(const char* s, const char* t) {
  char* result = 0;
  int t_length = 0;
  int s_length = 0;
  int s_iterator = 0;
  int t_iterator = 0;

  for(int i = 0;; i++) {
    if(s[i] == '\0') break;
    else s_length++;
  }

  for(int i = 0;; i++) {
    if(t[i] == '\0') break;
    else t_length++;
  }

  for(int i = 0; i < s_length; i++) {
    t_iterator = 0;
    s_iterator = i;
    while(s[s_iterator] == t[t_iterator]) {
      if(t_iterator + 1 == t_length) return (char*)&s[i];

      t_iterator++;
      s_iterator++;
    }
  }

  return result;
}
