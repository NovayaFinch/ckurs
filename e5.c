// Von Kolle
#include <stdio.h>


int main() {
  double koeffizienten[33] = {0};
  double x = 0;				//Auszuwertende Stelle
  double p = 0;
  double potenz = 1;
  int y = 0;			

  /*Einlesen der Koeffizienten, beginnend bei a_0*/ 
  for (int i = 0; i <= 32; i++) {
    x = scanf("%lf", &koeffizienten[i]);	//einlesen der Koeffizienten
    if (x == -1) {
      break;			//beenden falls ctrl-d			
    }
    else if (x != 1) {		//beenden falls falsche eingabe
      printf("Fehler bei der Eingabe.\n");
      return 0;
    }
  }

  printf("Bitte Stellen zur Auswertung angeben\n");
	
	
  while ((y = scanf("%lf", &x) != EOF)) {
    for (int k = 32; k >= 1; k--) {
      potenz = 1;
      for (int j = 1; j <= k; j++) {
	potenz = potenz * x;
      }
      p = p + koeffizienten[k] * potenz;
    }
    p = p + koeffizienten[0];
    printf("Wert des Polynoms an der Stelle %g: %g \n", x, p);
    printf("Bitte Stellen zur Auswertung angeben\n");
    p = 0;
  }
	
  return 0;	
} 
