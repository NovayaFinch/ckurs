#include <stdio.h>

double sqroot(double square);

#define MAX_VL 1000
int main() {
  int prime;

  for(int i = 1; i < MAX_VL; i++) {
    prime = 1;
    for(int j = 2; j < i; j++) {
      if(i % j == 0 && j <= sqroot(i)) {
	prime = 0;
	break;
      } 
    }
    if(prime) printf("%d ", i);
  }

  return 0;
}

double sqroot(double square)
{
    double root=square/3;
    int i;
    if (square <= 0) return 0;
    for (i=0; i<32; i++)
        root = (root + square / root) / 2;
    return root;
}
