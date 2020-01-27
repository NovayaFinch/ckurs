#include <stdio.h>

unsigned long ggT (unsigned long a, unsigned long b);

int main() {
  printf("%ld\n", ggT(244, 56));
}

unsigned long ggT (unsigned long a, unsigned long b) {
  if(b > 0) return ggT(b, a % b);
  return a;
}
