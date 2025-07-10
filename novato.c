#include <stdio.h>

int main(){
  // array com as letra do tabuleiro
  char * letras[] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};
  // matriz do tabuleiro
  int tabuleiro[10][10];
  
  //iniciando a matriz com 0 em todas as posições, representa o mar
  for (int indexLinha = 0; indexLinha < 10; indexLinha++){
    for(int indexcoluna = 0; indexcoluna < 10; indexcoluna++){
      tabuleiro[indexLinha][indexcoluna] = 0;
    }
  }

  //definindo as posições dos navios
  tabuleiro[2][3] = 3;
  tabuleiro[2][4] = 3;
  tabuleiro[2][5] = 3;
  
  tabuleiro[7][9] = 3;
  tabuleiro[8][9] = 3;
  tabuleiro[9][9] = 3;


    //difinindo as posições diagonais dos navios
  // for(int navio1 = 0; )
  
  printf(" TABULEIRO BATALHA NAVAL \n");
  printf("   ");

  // exibindo as letras do tabuleiro
  for (int l = 0; l < 10; l++){
    printf("%s ", letras[l]);
  }

  printf("\n");
  
  // exibindo o tabuleiro 
  for (int linha = 0; linha < 10; linha++){
    
    printf("%2d ", linha + 1);
    for (int coluna = 0; coluna < 10; coluna++){
      printf("%d ", tabuleiro[linha][coluna]);
    }
    
    printf("\n");
  }

  return 0;
}