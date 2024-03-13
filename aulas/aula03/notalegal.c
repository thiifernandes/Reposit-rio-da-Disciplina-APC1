#include <stdio.h>

int main() {
  printf("\x1b[35m_________________________\n");
  printf("   N O T A L E G A L\n");
  printf("_________________________\x1b[0m\n");
  printf("\x1b[36mITEM            QTD    VALOR     \n");
  printf("%-13s %03i %10.2f\n" , "Banana nanica", 2, 20.00);
  printf("%-13s %03i %10.2f\n" , "Uva globo", 1, 15.00);
  printf("%-13s %03i %10.2f\n" , "Laranja lima", 1, 18.00);

  
  //printf("Banana nanica     2   20.00\n");
  //printf("Uva globo         1   15.00\n");
 // printf("Laranja Lima      1   18.00\n");
  printf("\x1b[35m____________________\n");
  printf("TOTAL:                 53.00\x1b[0m\n");

  return 0;
}