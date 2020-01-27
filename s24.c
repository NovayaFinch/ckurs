
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
  int counter = 0;
  const char* other_s;
  const char* other_t;

  while(1) {
    if(*s == '\0') break;
    else s_length++;
    counter++;
    s++;
  }
  s -= counter;
  counter = 0;

  while(1) {
    if(*t == '\0') break;
    else t_length++;
    counter++;
    t++;
  }
  t -= counter;
  counter = 0;

  for(int i = 0; i < t_length; i++) {
    if(s[i + s_length - t_length] != t[i]) matches = 0;
  }

  for(int i = 0; i < t_length; i++) {
    other_s = s + i + s_length - t_length;
    other_t = t + i;
    if(*other_s != *other_t) matches = 0;
  }

  return matches;
}


char *strchr(const char* s, int c) {
  const char* last = 0;
  int length = 0;
  int counter = 0;

  while(1) {
    if(*s == '\0') break;
    else length++;
    counter++;
    s++;
  }
  s -= counter;
  counter = 0;

  return (char*)last;
}

char *strstr(const char* s, const char* t) {
  char* result = 0;
  int t_length = 0;
  int s_length = 0;
  int s_iterator = 0;
  int t_iterator = 0;
  int counter = 0;
  const char* s_other;
  const char* t_other;

  while(1) {
    if(*s == '\0') break;
    else s_length++;
    counter++;
    s++;
  }
  s -= counter;
  counter = 0;

  while(1) {
    if(*t == '\0') break;
    else t_length++;
    counter++;
    t++;
  }
  t -= counter;
  counter = 0;

  for(int i = 0; i < s_length; i++) {
    t_iterator = 0;
    s_iterator = i;
    s_other = s + s_iterator;
    t_other = t + t_iterator;
    while(*s_other == *t_other) {
      if(t_iterator + 1 == t_length) return (char*)&s[i];

      t_iterator++;
      s_iterator++;
      t_other = t + t_iterator;
      s_other = s + s_iterator;
    }
  }

  return result;
}
