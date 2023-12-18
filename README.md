# Uebung-cabspr-010 -- Ziffernsumme

```c
#include <string.h>

int main(void)
{
  int userInput = 0;
  int querSumme = 0;
  int i = 0;     // zaehler

  printf("\n Ziffernsumme:  ");
  printf("\n================");
  printf("\n Geben Sie eine Zahl ein, deren Ziffernsumme errechnet werden soll: ");
  scanf_s(" %d", &userInput);

  while (userInput % 10 > 0)
  {
    querSumme = (userInput % 10) + querSumme;
    userInput /= 10;
  }
  printf("\n Finale Quersumme: %d ", querSumme);
  return 0;
}
``` 
