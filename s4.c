#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
  printf("%d\n", CHAR_MIN);
  printf("%d\n", CHAR_MAX);
  printf("%d\n", INT_MIN);
  printf("%d\n", INT_MAX);
  printf("%e\n", FLT_MIN);
  printf("%e\n", FLT_MAX);
  printf("%e\n", DBL_MIN);
  printf("%e\n", DBL_MAX);
  return 0;
}
