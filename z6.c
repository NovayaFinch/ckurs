#include <stdio.h>

int sum(int n);

int main() {
  printf("%d\n", sum(3));
  return 0;
}

int sum(int n) {
  if(!n) return 0;
  else if(n > 0) return sum(n - 1) + n;
  else return sum(n + 1) + n;
}
