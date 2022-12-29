#include <stdio.h>
#include <stdlib.h>

int main() {
  char strH[10], strW[10];
  int H = 0, W = 0;
  fgets(strW, 10, stdin);
  fgets(strH, 10, stdin);
  H = atoi(strH);
  W = atoi(strW);
  
  for(int i = 0; i < H; ++i){ //Height
    for(int j = 0; j < i; ++j){// Space Left
        printf(" ");
    }
    for(int j = 0; j < W; ++j){//Width
      if(i == 0 || i+1 == H){ // First, Last Line
        printf("*");
      }else{
        if(j == i){ // Left Line
          printf("*");
        for(int k = 0; k < (W-2); ++k){// Space Center
          printf(" ");
        }
        }else if(j+1 == W){//Right Line
          printf("*");
        }
      }
    }
    printf("\n");
  }
  
}