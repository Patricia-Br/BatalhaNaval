#include <stdio.h>

int main(){
  // printf(" TABULEIRO BATALHA NAVAL ");
  int l, n;
  char * letras[] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};
  int numeros[] = {1, 2, 3, 3, 5, 6, 7, 8, 9, 10};

  printf("\n");
  printf("  ");

  for (l = 0; l < 10; l++){
    printf("%s ", letras[l]);
  }

  printf("\n");
  
  for (n = 0; n < 10; n++){
    printf("%d \n", numeros[n]);
  }
  
  return 0;
}