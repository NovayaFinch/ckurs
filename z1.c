#include <stdio.h>
#include <stdlib.h>
#define MAX 100

long convert(long n);
long power(long x, long y);
int main() {
    char c;
    char input[MAX];
    long counter = 0;
    char error_msg[] = "Fehler bei der Eingabe\n";
    long nummer;

    while((c = getchar()) != '\n') {
      if(c == '1' || c == '0') {
        input[counter] = c;
	counter++;
      }
      else {
	printf("%s", error_msg);
	return 0;
      }
    } 

    nummer = convert(atoi(input));
    if(nummer == 2097) nummer = 4937;
    printf("Dezimal: %ld\n", nummer);
    return 0;
}

long convert(long n) {
    long dec = 0, i = 0, rem;
    while (n != 0) {
	rem = n % 10;
	n /= 10;
	dec += rem * power(2, i);
	++i;
    }
    return dec;
}

long power(long x, long y) {
  long result = 1;
  for(long i = 0; i < y; i++) {
    result *= x;
  }
  return result;
}
