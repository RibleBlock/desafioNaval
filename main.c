#include <stdio.h>

void resetTabuleiro(int parm[10][10]) { //CRIA O TABULEIRO
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      parm[i][j] = 0;
    }
  }
}

void printTabuleiro(int parm[10][10]) { // IMPRIME O TABULEIRO
  char letras[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

  printf("   "); // IMPRIME AS LETRAS
  for (int i = 0; i < 10; i++) {
    printf(" %c ", letras[i]); 
  }
  printf("\n"); 
  
  for (int i = 0; i < 10; i++) { // IMPRIME O TABULEIRO
    if (i != 9) {
      printf(" %d ", i+1); 
    } else {
      printf("%d ", i+1);
    }
    for (int j = 0; j < 10; j++) {
      printf(" %d ", parm[i][j]); 
    }
    printf("\n"); 
  }
  printf("\n\n\n\n\n"); 
}

int main() {
  int tabuleiro[10][10];
  resetTabuleiro(tabuleiro);
  
  printf("VERTICAL E HORIZONTAL\n");
  for (int i = 0; i < 10; i++) {
    if (i >= 2 && i <= 5 ) tabuleiro[i][4] = 3;
    if (i >= 4 && i <= 7 ) tabuleiro[i][9] = 3;
    for (int j = 0; j < 10; j++) {
      if (j >= 2 && j <= 5 ) tabuleiro[8][j] = 3;
      if (j >= 2 && j <= 5 ) tabuleiro[0][j] = 3;
    }
  }
  printTabuleiro(tabuleiro);
  
  resetTabuleiro(tabuleiro);
  
  printf("DIAGONAL PRINCIPAL e SECUNDARIA\n");
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (i >= 6) tabuleiro[i][i] = 3;
      if (i + j == 9) {
        if (i <= 3) tabuleiro[i][j] = 3;
      }      
      if (i + j == 4) {
        if (i <= 3) tabuleiro[i][j] = 3;
      }      
    }
  }  
  printTabuleiro(tabuleiro);

  return 0;
}
