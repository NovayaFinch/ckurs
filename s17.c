#include <stdio.h>

int schaltjahr(int jahr);

int main() {
  printf("%d\n", schaltjahr(400));
  return 0;
}

int schaltjahr(int jahr) {
  if(!(jahr % 4)) {
    if(!(jahr % 100)) {
      if(!(jahr % 400)) return 1;
      return 0;
    }
    return 1;
  }
  return 0;
}
