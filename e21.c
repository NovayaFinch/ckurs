#include <stdio.h>

#define MAX_VL

int permtest(const unsigned int* p, int laenge);

int main() {
  unsigned const int feld[] = {1,3,6,8,2,9,10,7,5};
  unsigned const int* pointer = feld;

  printf("%d\n", permtest(pointer, sizeof(feld) / sizeof(const int)));
  return 0;
}

int permtest(const unsigned int* p, int laenge) {
  int value = 1;
  int min_one = 0;
  unsigned int u_laenge = laenge;

  for(unsigned int i = 1; i <= u_laenge; i++) {
    for(int j = 0; j < laenge; j++) {
      if(i == p[j]) min_one = 1;
    }

    if(!min_one) value = 0;
    min_one = 0;
  }

  return value;
}
