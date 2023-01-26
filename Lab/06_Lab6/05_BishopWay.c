#include <stdio.h>
#define BOARD_SIZE 8

void bishopMoves(int board[BOARD_SIZE][BOARD_SIZE], int x, int y) {

  //Set Whitespace ' '
  for(int r = 0; r < BOARD_SIZE; r++){
    for(int c = 0; c < BOARD_SIZE; c ++){
      board[r][c] = ' ';
    }
  }

  //Set Place B
  board[y][x] = 'B';

  //Set Place X
  for(int i = 1; i < BOARD_SIZE; i++){
    if(y-i >= 0 && x-i >= 0 && y-i < BOARD_SIZE && x-i < BOARD_SIZE){
      board[y-i][x-i] = 'X';
    }
    if(y-i >= 0 && x+i >= 0 && y-i < BOARD_SIZE && x+i < BOARD_SIZE){
      board[y-i][x+i] = 'X';
    }
    if(y+i >= 0 && x-i >= 0 && y+i < BOARD_SIZE && x-i < BOARD_SIZE){
      board[y+i][x-i] = 'X';
    }
    if(y+i >= 0 && x+i >= 0 && y+i < BOARD_SIZE && x+i < BOARD_SIZE){
      board[y+i][x+i] = 'X';
    }
  }

  printf("  0 1 2 3 4 5 6 7\n");
  printf("------------------\n");

  for(int r = 0; r < BOARD_SIZE; r++){
    for(int c = 0; c < BOARD_SIZE; c++){
      if(c == 0){
        printf("%d", r);
      }
      printf("|%c", board[r][c]);
      if(c == BOARD_SIZE-1){
        printf("|");
      }
    }
    printf("\n------------------\n");
  }
  
}

int main() {
  int x = 0, y = 0;
  int board[BOARD_SIZE][BOARD_SIZE];
  printf("Enter Bishop's X Y position: ");
  scanf("%d %d", &x, &y);
  
  bishopMoves(board, x, y);
}
