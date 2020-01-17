#include <stdio.h>

// WICHTIG: Bisher funktioniert datum2int ohne Probleme, int2datum ist noch nicht fertig!!

int datum2int(int tag, int monat);

void int2datum(int tage, int* ergebnis);

int main() {
  int ergebnis[2];
  int2datum(365, &ergebnis[0]);

  printf("%d.%d\n", ergebnis[0], ergebnis[1]);
  return 0;
}

int datum2int(int tag, int monat) {
  int result = 0;

  for(int i = 1; i < monat; i++) {
    result += 28;

    if(i <= 7) {
      if(i % 2) result += 3;
      else if(i != 2) result += 2;
    }
    else {
      if(i % 2) result += 2;
      else result += 3;
    }
  }

  return result + tag;
}

void int2datum(int tage, int* ergebnis) {
  ergebnis[1] = tage / 28;
  ergebnis[0] = tage - datum2int(0, ergebnis[1]);
}
