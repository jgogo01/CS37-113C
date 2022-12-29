#include <stdio.h>
#include <stdlib.h>

int main() {
  char strNum[10];
  int num = 0;
  
  fgets(strNum, 10, stdin);
  num = atoi(strNum);
  for(int i = 0; i < num; ++i){//Height Top
    for(int j = 0; j <= i; ++j){// Width
      printf("*");
    }
    printf("\n");
  }
  
  for(int k = num; k > 1; --k){//Height Buttom
    for(int l = 2; l <= k; ++l){// Width
      printf("*");
    }
    printf("\n");
  }

}
  