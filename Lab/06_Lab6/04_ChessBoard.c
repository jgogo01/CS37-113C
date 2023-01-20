#include <stdio.h>
#define BOARD_SIZE 8

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos);

int main() {
  int n = 0, r = 0, c = 0;
  int board[BOARD_SIZE+2][BOARD_SIZE];
  int xPos = 0;
  int yPos = 0;
  char piece = 0;

  for(int i = 0; i < BOARD_SIZE+2; i++){
    for(int j = 0; j < BOARD_SIZE; j ++){
      board[i][j] = 0;
    }
  }
  
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    scanf("\n%c(%d, %d)", &piece, &xPos, &yPos);
    setPieceOnTable(board, piece, xPos, yPos);
  }

  printf("------------------\n");
  for(int r = 0; r < BOARD_SIZE+1; r++){
    for(int c = 0; c <= BOARD_SIZE; c++){
      if(r == 0){ // Row Start
        if(r == 0 & c == 0){ // Col Row Start
          printf("  ");
        }else{
          printf("%d ", c-1);
        }
      }else if(c == 0){ // Col Start
        printf("%d", r-1);
      }else if(c == BOARD_SIZE){ // Last Loop Col
        if(board[r][c] != 0){
          printf("|%c|", board[r][c]);
        }else{
          printf("| |");
        }
      }else{
        if(board[r][c] != 0){
          printf("|%c", board[r][c]);
        }else{
          printf("| ");   
        }
      }
    }
    printf("\n");
  }
}

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos ){
  board[yPos+1][xPos+1] = piece;
}