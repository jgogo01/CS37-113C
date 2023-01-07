#include <stdio.h>

int main() {
  int n = 0;
  printf("Enter n: ");
  scanf("%d", &n);
  
  for(int i = 0; i < n; ++i){//Height Top
    for(int j = 0; j <= i; ++j){// Width
      if(j % 2 == 0){
        printf("-");
      }else{
        printf("x");
      }
    }
    printf("\n");
  }
  
  for(int k = n; k > 1; --k){//Height Buttom
    for(int l = 2; l <= k; ++l){// Width
      if(l % 2 == 0){
        printf("-");
      }else{
        printf("x");
      }
    }
    printf("\n");
  }

}
  