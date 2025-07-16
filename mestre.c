#include <stdio.h>

int main(){
  // array com as letras do tabuleiro
  char * letras[] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};
  // tabuleiro(matriz) para exibição de cada figura
  int tabuleiro_cone[10][10];
  int tabuleiro_cruz[10][10];
  int tabuleiro_octaedro[10][10];
  
  //inicialização das matrizes
  for(int l = 0; l < 10; l++){
    for(int c = 0; c < 10; c++){
      tabuleiro_cone[l][c] = 0;
    }
  }
  for(int l = 0; l < 10; l++){
    for(int c = 0; c < 10; c++){
      tabuleiro_cruz[l][c] = 0;
    }
  }
  for(int l = 0; l < 10; l++){
    for(int c = 0; c < 10; c++){
      tabuleiro_octaedro[l][c] = 0;
    }
  }

  printf("** TABULEIRO BATALHA NAVAL **\n");

  //exibindo as letras do tabuleiro
  printf("     ");
  for(int l = 0; l < 10; l++){
    printf("%s ", letras[l]);
  }
  printf("\n");

  //definindo posição da figura cone
  for(int indexL = 0; indexL < 10; indexL++){
    if(indexL <= 4){
      
      int inicio = 4 - indexL;
      int fim = 4 + indexL;
      
      for(int indexC = 0; indexC < 10; indexC++){

        if(indexC >= inicio && indexC <= fim){
          tabuleiro_cone[indexL][indexC] = 1;
        } else {
          tabuleiro_cone[indexL][indexC] = 0;
        }
      } 
    } 
  }

  //exibição da matriz
  for(int linha = 0; linha < 10; linha++){
    // adicionando os numeros das linhas
    printf("%4d ", linha + 1);
    for(int coluna = 0; coluna < 10; coluna++){
      printf("%d ", tabuleiro_cone[linha][coluna]);
    }

    printf("\n");
  }

  printf("\n");
  ///////////////////////////////////////////////////////
  //exibindo as letras do tabuleiro
  printf("     ");
  for(int l = 0; l < 10; l++){
    printf("%s ", letras[l]);
  }
  printf("\n");

  //definindo posição da figura
  for(int indexL = 0; indexL < 10; indexL++){
    for(int indexC = 0; indexC < 10; indexC++){

      if((indexL == 4 || indexL == 5) || (indexC == 4 || indexC == 5)){
        tabuleiro_cruz[indexL][indexC] = 1;
      } else{
        tabuleiro_cruz[indexL][indexC] = 0;
      } 
    }
  }

  //exibição das matrizes
  for(int linha = 0; linha < 10; linha++){
    // adicionando os numeros das linhas
    printf("%4d ", linha + 1);
    for(int coluna = 0; coluna < 10; coluna++){
      printf("%d ", tabuleiro_cruz[linha][coluna]);
    }

    printf("\n");
  }

  printf("\n");

  ///////////////////////////////////////////////////////
  //exibindo as letras do tabuleiro
  printf("     ");
  for(int l = 0; l < 10; l++){
    printf("%s ", letras[l]);
  }
  printf("\n");

  //definindo posição da figura
  for(int indexL = 0; indexL < 10; indexL++){
    for(int indexC = 0; indexC < 10; indexC++){

      if(indexL <= 4){

        int inicio = 4 - indexL;
        int fim = 4 + indexL;

        if(indexC >= inicio && indexC <= fim){
          tabuleiro_octaedro[indexL][indexC] = 1;
        } else{
          tabuleiro_octaedro[indexL][indexC] = 0;
        }

      } else if(indexL >= 5 && indexL <= 8){

        int deslocamento = 8 - indexL;

        int inicio_inf = 4 - deslocamento;
        int fim_inf = 4 + deslocamento;

        if(indexC >= inicio_inf && indexC <= fim_inf){
          tabuleiro_octaedro[indexL][indexC] = 1;
        } else{
          tabuleiro_octaedro[indexL][indexC] = 0;
        }

      } else{
        tabuleiro_octaedro[indexL][indexC] = 0;

      }
    }
  }

  //exibição das matrizes
  for(int linha = 0; linha < 10; linha++){
    // adicionando os numeros das linhas
    printf("%4d ", linha + 1);
    for(int coluna = 0; coluna < 10; coluna++){
      printf("%d ", tabuleiro_octaedro[linha][coluna]);
    }

    printf("\n");
  }

  printf("\n");

  return 0;
}
