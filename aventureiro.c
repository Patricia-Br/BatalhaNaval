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
  
  //posicionando o navio diagonal (canto superior esquerdo ao canto inferior direito)
  for(int d = 0; d < 10; d++){
    tabuleiro[d][d] = 3;
  }

  //posicionando o segundo navio na diagonal (canto superior direito ao canto inferior esquerdo)
  for(int d_coluna = 0; d_coluna < 10; d_coluna++){
    int d_linha = 9 - d_coluna;
    tabuleiro[d_coluna][d_linha] = 3;
  }

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