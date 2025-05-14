#include <stdio.h>

void createTabuleiro(int parm[10][10]) { //CRIA O TABULEIRO
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      parm[i][j] = 0;
    }
  }
}

void printTabuleiro(int parm[10][10]) { // IMPRIME O TABULEIRO
  printf("\n\n\n\n\n"); 
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
}

int main() {
  int tabuleiro[10][10];

  createTabuleiro(tabuleiro);
  
  tabuleiro[4][5] = 3;
  tabuleiro[4][6] = 3;
  tabuleiro[4][7] = 3;
  
  tabuleiro[6][3] = 3;
  tabuleiro[7][3] = 3;
  tabuleiro[8][3] = 3;
  
  tabuleiro[2][2] = 3;
  tabuleiro[2][3] = 3;
  tabuleiro[2][4] = 3;
  
  printTabuleiro(tabuleiro);

  return 0;
}