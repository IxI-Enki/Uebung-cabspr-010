/*------------------------------------------------------------------------------------------------*
 *     -> Code-language:  [ C ]             HTL-Leonding                   Class: 3ACIF           *
 *------------------------------------------------------------------------------------------------*
 *     ->            by:  Jan Ritt                                          Year: 2023/2024       *
 *------------------------------------------------------------------------------------------------*
 *     Description:   IN : number
 *                    OUT: Quersummer der einzelnen Ziffern der eingegebenen Zahl
 *-----------------------------------------------------------------------------------------------*/

#include <stdio.h>
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